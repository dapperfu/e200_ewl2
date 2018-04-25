
/*
 *	semihosted_console_io.c	-	redirect console I/O through P&E semihosting interface
 *
 */
#include "console_io.h"
#include "semihosting.h"

/*
 *	sys_writec		-	write a character to the console via semihosting interface
 *
 */

void sys_writec(register void *cp) _EWL_WEAK _EWL_DO_NOT_INLINE;
void sys_writec(register void *cp)
{
  // r0 = 4 (OsWrite)
  // r3 = file handle returned from system call open(...)
  // r4 = character buffer cast as void* pointer
  // r5 = number of bytes (nbyte) to write	
  int value;

#ifdef __VLE__
  __asm volatile ("se_li 0, %1; se_mr 3, %2; se_mr 4, %3; se_mr 5, %4; se_sc; se_mr %0, 0"
      :"=kregs" (value)
      :"i" (Semihosting_Write), "kregs"(((semihost_readwrite_parms *)cp)->handle), "kregs"(((semihost_readwrite_parms *)cp)->data), "kregs"(((semihost_readwrite_parms *)cp)->count)
      :"r0", "r3", "r4", "r5");
#endif  
}


/*
 *	sys_write0		-	write a nul-terminated string to the console via semihosting interface
 *
 */

void sys_write0(register void *str)  _EWL_WEAK _EWL_DO_NOT_INLINE;
void sys_write0(register void *str)
{
  // r0 = 4 (OsWrite)
  // r3 = file handle returned from system call open(...)
  // r4 = character buffer cast as void* pointer
  // r5 = number of bytes (nbyte) to write
  int value;
#ifdef __VLE__
  __asm volatile ("se_li 0, %1; se_mr 3, %2; se_mr 4, %3; se_mr 5, %4; se_sc; se_mr %0, 0"
      :"=kregs" (value)
      :"i" (Semihosting_Write), "kregs"(((semihost_readwrite_parms *)str)->handle), "kregs"(((semihost_readwrite_parms *)str)->data), "kregs"(((semihost_readwrite_parms *)str)->count)
      :"r0", "r3", "r4", "r5");
#endif
}


/*
 *	sys_readc		-	read a character from the console via semihosting interface
 *
 */

int sys_readc(void)  _EWL_WEAK _EWL_DO_NOT_INLINE;
int sys_readc(void)
{
  // r0 = 3 (OsRead)
  // r3 = file handle returned from system call open(...)
  // r4 = character buffer cast as void* pointer
  // r5 = number of bytes (nbyte) to read
  int value = -1;
  int block[3];
  
  block[0] = 0;
  block[1] = 0;
  block[2] = 0;
#ifdef __VLE__
  __asm volatile ("se_li 0, %1; se_mr 3, %2; se_mr 4, %3; se_mr 5, %4; se_sc; se_mr %0, 0"
      :"=kregs" (value)
      :"i" (Semihosting_Read), "kregs"(block[0]), "kregs"(block[1]), "kregs"(block[2])
      :"r0", "r3", "r4", "r5");
#endif
  return value; 
}


/*
 *	sys_exit		-	terminate an application via semihosting interface
 *
 */

void sys_exit(int status)  _EWL_WEAK _EWL_DO_NOT_INLINE;
void sys_exit(int status)
{
  // r0 = 1 (OsExit)
  // r3 = status
#ifdef __VLE__
  __asm volatile ("se_li 0, %0; se_mr 3, %1"::"i"(Semihosting_Exit), "kregs"(status):"r0", "r3");
  __asm volatile ("se_sc");
#endif
}


/*
 *	__read_console	-	read from the console into 'buffer' until end-of-line or 'count' characters have been read
 *
 */

int __read_console(__std(__file_handle) handle, unsigned char *buffer, __std(size_t) *count)
{
	if ( *count <= 1)
	{
		buffer[0] = sys_readc();
		return(__no_io_error);
	}

	__read_file(handle,buffer,count);

	return(__no_io_error);
}


/*
 *	__write_console	-	write 'count' bytes from 'buffer' to the console
 *
 */


int	__write_console(__std(__file_handle) handle, unsigned char *buffer, __std(size_t) *count)
{
#if !defined(__SEMIHOSTING)
	#pragma unused(handle)
#endif
	__std(size_t) i, cnt;

#define _WC_BUFLEN 80
	static unsigned char tmpstring[_WC_BUFLEN+1];

	cnt = *count;

	if ( cnt <= 1)
	{
		sys_writec(buffer);
		return(__no_io_error);
	}

	i=0;

/* Use this for output to UART Terminal */

#if !defined(__SEMIHOSTING) 
	while ( cnt > _WC_BUFLEN )
	{

		strncpy(tmpstring,&buffer[i],_WC_BUFLEN);
		tmpstring[_WC_BUFLEN]=0;
		sys_write0(tmpstring);
		cnt -= _WC_BUFLEN;
		i += _WC_BUFLEN;
	}

	if ( cnt ) {
		strncpy(tmpstring,&buffer[i],cnt);
		tmpstring[cnt]=0;
		sys_write0(tmpstring);
	}

/* Use this for simulator output using semihosting interface (sys_write0 did not work for 
	gnu qemu simulator */
#else /* __SEMIHOSTING */
	__write_file(handle,buffer,count);
#endif

	return(__no_io_error);
}


/*
 *	__close_console	-	close the console
 *
 */

int __close_console(__std(__file_handle) handle)
{
	#pragma unused(handle)

	return(__no_io_error);
}
