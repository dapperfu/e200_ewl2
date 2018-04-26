/* GCC PowerPC VLE Runtime Support Library
 * Copyright © 2017 NXP . All rights reserved.
 *
 */

#include <NMWException.h>
#include <ansi_parms.h>

DestructorChain *__global_destructor_chain = 0;

#ifndef _MAX_ATEXIT_FUNCS
#define _MAX_ATEXIT_FUNCS 64
#endif

static DestructorChain atexit_funcs[_MAX_ATEXIT_FUNCS];
static long atexit_curr_func = 0;

extern void __destroy_global_chain(void) {
  DestructorChain *gdc = __global_destructor_chain;
  while (gdc) {
    ((void (*)(void *))gdc->destructor)(gdc->object);
    gdc = gdc->next;
  }
}

extern void *__register_global_object(void *object, void *destructor,
                                      void *regmem) {
  ((DestructorChain *)regmem)->next = __global_destructor_chain;
  ((DestructorChain *)regmem)->destructor = destructor;
  ((DestructorChain *)regmem)->object = object;
  __global_destructor_chain = (DestructorChain *)regmem;

  return object;
}

extern int __cxa_atexit(void (*f)(void *), void *p, void *d);
extern int __cxa_atexit(void (*f)(void *), void *p, void *d) {
  /* as long as we don't have any shared object this will work - d is the DSO
   * discriminant */
  if (atexit_curr_func == _MAX_ATEXIT_FUNCS)
    return -1;
  __register_global_object(p, f, &atexit_funcs[atexit_curr_func++]);
  return 0;
}

extern int __aeabi_atexit(void *p, void (*f)(void *), void *d);
extern int __aeabi_atexit(void *p, void (*f)(void *), void *d) {
  return __cxa_atexit(f, p, d);
}

extern int __register_atexit(void (*func)(void)) {
  return __cxa_atexit((void (*)(void *))func, 0, 0);
}
