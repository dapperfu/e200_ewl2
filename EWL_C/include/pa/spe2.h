#ifndef _SPE2_H
#define _SPE2_H

#ifdef __SPE2__


// ============================================================================
// SPE2 extension
// Special buitins that does not fit in gcc properly
// ============================================================================

#define __builtin_spe2_evlbbsplatbu(u,i)   ({__ev64_opaque__ d; __asm volatile ("evlbbsplatbu %1,%2*1(%0)"  : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlbbsplatbmx(m,x)  ({__ev64_opaque__ d; __asm volatile ("evlbbsplatbmx %1,%0,%2"    : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evldbu(u,i)         ({__ev64_opaque__ d; __asm volatile ("evldbu %1,%2*8(%0)"        : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evldbmx(m,x)        ({__ev64_opaque__ d; __asm volatile ("evldbmx %1,%0,%2"          : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlddu(u,i)         ({__ev64_opaque__ d; __asm volatile ("evlddu %1,%2*8(%0)"        : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlddmx(m,x)        ({__ev64_opaque__ d; __asm volatile ("evlddmx %1,%0,%2"          : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evldhu(u,i)         ({__ev64_opaque__ d; __asm volatile ("evldhu %1,%2*8(%0)"        : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evldhmx(m,x)        ({__ev64_opaque__ d; __asm volatile ("evldhmx %1,%0,%2"          : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evldwu(u,i)         ({__ev64_opaque__ d; __asm volatile ("evldwu %1,%2*8(%0)"        : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evldwmx(m,x)        ({__ev64_opaque__ d; __asm volatile ("evldwmx %1,%0,%2"          : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlhhesplatu(u,i)   ({__ev64_opaque__ d; __asm volatile ("evlhhesplatu %1,%2*2(%0)"  : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlhhesplatmx(m,x)  ({__ev64_opaque__ d; __asm volatile ("evlhhesplatmx %1,%0,%2"    : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlhhossplatu(u,i)  ({__ev64_opaque__ d; __asm volatile ("evlhhossplatu %1,%2*2(%0)" : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlhhossplatmx(m,x) ({__ev64_opaque__ d; __asm volatile ("evlhhossplatmx %1,%0,%2"   : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlhhousplatu(u,i)  ({__ev64_opaque__ d; __asm volatile ("evlhhousplatu %1,%2*2(%0)" : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlhhousplatmx(m,x) ({__ev64_opaque__ d; __asm volatile ("evlhhousplatmx %1,%0,%2"   : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlhhsplathu(u,i)   ({__ev64_opaque__ d; __asm volatile ("evlhhsplathu %1,%2*2(%0)"  : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlhhsplathmx(m,x)  ({__ev64_opaque__ d; __asm volatile ("evlhhsplathmx %1,%0,%2"    : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwbeu(u,i)        ({__ev64_opaque__ d; __asm volatile ("evlwbeu %1,%2*4(%0)"       : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwbemx(m,x)       ({__ev64_opaque__ d; __asm volatile ("evlwbemx %1,%0,%2"         : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwbosu(u,i)       ({__ev64_opaque__ d; __asm volatile ("evlwbosu %1,%2*4(%0)"      : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwbosmx(m,x)      ({__ev64_opaque__ d; __asm volatile ("evlwbosmx %1,%0,%2"        : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwbouu(u,i)       ({__ev64_opaque__ d; __asm volatile ("evlwbouu %1,%2*4(%0)"      : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwboumx(m,x)      ({__ev64_opaque__ d; __asm volatile ("evlwboumx %1,%0,%2"        : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwbsplatwu(u,i)   ({__ev64_opaque__ d; __asm volatile ("evlwbsplatwu %1,%2*4(%0)"  : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwbsplatwmx(m,x)  ({__ev64_opaque__ d; __asm volatile ("evlwbsplatwmx %1,%0,%2"    : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwheu(u,i)        ({__ev64_opaque__ d; __asm volatile ("evlwheu %1,%2*4(%0)"       : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwhemx(m,x)       ({__ev64_opaque__ d; __asm volatile ("evlwhemx %1,%0,%2"         : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwhosu(u,i)       ({__ev64_opaque__ d; __asm volatile ("evlwhosu %1,%2*4(%0)"      : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwhosmx(m,x)      ({__ev64_opaque__ d; __asm volatile ("evlwhosmx %1,%0,%2"        : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwhouu(u,i)       ({__ev64_opaque__ d; __asm volatile ("evlwhouu %1,%2*4(%0)"      : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwhoumx(m,x)      ({__ev64_opaque__ d; __asm volatile ("evlwhoumx %1,%0,%2"        : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwhsplatu(u,i)    ({__ev64_opaque__ d; __asm volatile ("evlwhsplatu %1,%2*4(%0)"   : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwhsplatmx(m,x)   ({__ev64_opaque__ d; __asm volatile ("evlwhsplatmx %1,%0,%2"     : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwhsplatwu(u,i)   ({__ev64_opaque__ d; __asm volatile ("evlwhsplatwu %1,%2*4(%0)"  : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwhsplatwmx(m,x)  ({__ev64_opaque__ d; __asm volatile ("evlwhsplatwmx %1,%0,%2"    : "+r" (m), "=r" (d) : "r" (x)); d;})
#define __builtin_spe2_evlwwsplatu(u,i)    ({__ev64_opaque__ d; __asm volatile ("evlwwsplatu %1,%2*4(%0)"   : "+r" (u), "=r" (d) : "i" (i)); d;})
#define __builtin_spe2_evlwwsplatmx(m,x)   ({__ev64_opaque__ d; __asm volatile ("evlwwsplatmx %1,%0,%2"     : "+r" (m), "=r" (d) : "r" (x)); d;})

#define __builtin_spe2_evstdbu(d,u,i)        __asm volatile ("evstdbu %1,%2*8(%0)"       : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstdbmx(d,m,x)       __asm volatile ("evstdbmx %1,%0,%2"         : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstddu(d,u,i)        __asm volatile ("evstddu %1,%2*8(%0)"       : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstddmx(d,m,x)       __asm volatile ("evstddmx %1,%0,%2"         : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstdhu(d,u,i)        __asm volatile ("evstdhu %1,%2*8(%0)"       : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstdhmx(d,m,x)       __asm volatile ("evstdhmx %1,%0,%2"         : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstdwu(d,u,i)        __asm volatile ("evstdwu %1,%2*8(%0)"       : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstdwmx(d,m,x)       __asm volatile ("evstdwmx %1,%0,%2"         : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evsthbu(d,u,i)        __asm volatile ("evsthbu %1,%2*2(%0)"       : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evsthbmx(d,m,x)       __asm volatile ("evsthbmx %1,%0,%2"         : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwbu(d,u,i)        __asm volatile ("evstwbu %1,%2*4(%0)"       : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwbmx(d,m,x)       __asm volatile ("evstwbmx %1,%0,%2"         : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwbeu(d,u,i)       __asm volatile ("evstwbeu %1,%2*4(%0)"      : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwbemx(d,m,x)      __asm volatile ("evstwbemx %1,%0,%2"        : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwbou(d,u,i)       __asm volatile ("evstwbou %1,%2*4(%0)"      : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwbomx(d,m,x)      __asm volatile ("evstwbomx %1,%0,%2"        : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwheu(d,u,i)       __asm volatile ("evstwheu %1,%2*4(%0)"      : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwhemx(d,m,x)      __asm volatile ("evstwhemx %1,%0,%2"        : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwhou(d,u,i)       __asm volatile ("evstwhou %1,%2*4(%0)"      : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwhomx(d,m,x)      __asm volatile ("evstwhomx %1,%0,%2"        : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwweu(d,u,i)       __asm volatile ("evstwweu %1,%2*4(%0)"      : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwwemx(d,m,x)      __asm volatile ("evstwwemx %1,%0,%2"        : "+r" (m)           : "r" (d), "r" (x))
#define __builtin_spe2_evstwwou(d,u,i)       __asm volatile ("evstwwou %1,%2*4(%0)"      : "+r" (u)           : "r" (d), "i" (i))
#define __builtin_spe2_evstwwomx(d,m,x)      __asm volatile ("evstwwomx %1,%0,%2"        : "+r" (m)           : "r" (d), "r" (x))

#define __builtin_spe2_evdotp4hgasmfaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotp4hgasmfaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hgasmiaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotp4hgasmiaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hgasumiaa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotp4hgasumiaa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hgaumiaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotp4hgaumiaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hgssmfaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotp4hgssmfaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hgssmiaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotp4hgssmiaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hxgasmfaa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotp4hxgasmfaa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hxgasmiaa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotp4hxgasmiaa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hxgssmfaa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotp4hxgssmfaa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotp4hxgssmiaa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotp4hxgssmiaa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpbasmiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpbasmiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpbasumiaaw3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotpbasumiaaw3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpbaumiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpbaumiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphasmiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphasmiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphassfaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphassfaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphassfraaw3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotphassfraaw3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphassiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphassiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphasumiaaw3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotphasumiaaw3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphasusiaaw3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotphasusiaaw3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphaumiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphaumiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphausiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphausiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphihcsmiaaw3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotphihcsmiaaw3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphihcssfaaw3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotphihcssfaaw3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphihcssfraaw3(a,b,c) ({__ev64_opaque__ d = a; __asm ("evdotphihcssfraaw3 %0,%1,%2" : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphihcssiaaw3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotphihcssiaaw3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphssmiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphssmiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphsssfaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphsssfaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphsssfraaw3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotphsssfraaw3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotphsssiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotphsssiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotplohcsmiaaw3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotplohcsmiaaw3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotplohcssfaaw3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotplohcssfaaw3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotplohcssfraaw3(a,b,c) ({__ev64_opaque__ d = a; __asm ("evdotplohcssfraaw3 %0,%1,%2" : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotplohcssiaaw3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotplohcssiaaw3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwasmiaa3(a,b,c)     ({__ev64_opaque__ d = a; __asm ("evdotpwasmiaa3 %0,%1,%2"     : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwassiaa3(a,b,c)     ({__ev64_opaque__ d = a; __asm ("evdotpwassiaa3 %0,%1,%2"     : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwasumiaa3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwasumiaa3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwasusiaa3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwasusiaa3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwaumiaa3(a,b,c)     ({__ev64_opaque__ d = a; __asm ("evdotpwaumiaa3 %0,%1,%2"     : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwausiaa3(a,b,c)     ({__ev64_opaque__ d = a; __asm ("evdotpwausiaa3 %0,%1,%2"     : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwcsmiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwcsmiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwcssfaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwcssfaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwcssfraaw3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotpwcssfraaw3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwcssiaaw3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwcssiaaw3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwgasmfaa3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwgasmfaa3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwgasmfraa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotpwgasmfraa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwgssmfaa3(a,b,c)    ({__ev64_opaque__ d = a; __asm ("evdotpwgssmfaa3 %0,%1,%2"    : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwgssmfraa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotpwgssmfraa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwssmiaa3(a,b,c)     ({__ev64_opaque__ d = a; __asm ("evdotpwssmiaa3 %0,%1,%2"     : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwsssiaa3(a,b,c)     ({__ev64_opaque__ d = a; __asm ("evdotpwsssiaa3 %0,%1,%2"     : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwxgasmfaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotpwxgasmfaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwxgasmfraa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotpwxgasmfraa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwxgssmfaa3(a,b,c)   ({__ev64_opaque__ d = a; __asm ("evdotpwxgssmfaa3 %0,%1,%2"   : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evdotpwxgssmfraa3(a,b,c)  ({__ev64_opaque__ d = a; __asm ("evdotpwxgssmfraa3 %0,%1,%2"  : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmar()                   ({__ev64_opaque__ d;     __asm volatile ("evmar %0"           : "=r" (d));                    d;})
#define __builtin_spe2_evmwhssfaaw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwhssfaaw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwhssfanw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwhssfanw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwhssfraaw3(a,b,c)      ({__ev64_opaque__ d = a; __asm ("evmwhssfraaw3 %0,%1,%2"      : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwhssfranw3(a,b,c)      ({__ev64_opaque__ d = a; __asm ("evmwhssfranw3 %0,%1,%2"      : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlsmiaaw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlsmiaaw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlsmianw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlsmianw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlssiaaw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlssiaaw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlssianw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlssianw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlumiaaw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlumiaaw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlumianw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlumianw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlusiaaw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlusiaaw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evmwlusianw3(a,b,c)       ({__ev64_opaque__ d = a; __asm ("evmwlusianw3 %0,%1,%2"       : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evinsb(a,b,c,s)           ({__ev64_opaque__ d = a; __asm ("evinsb %0,%1,%3,%2"          : "+r" (d) : "r" (b), "i" (c), "i" (s)); d;})
#define __builtin_spe2_evinsh(a,b,c,s)           ({__ev64_opaque__ d = a; __asm ("evinsh %0,%1,%3,%2"          : "+r" (d) : "r" (b), "i" (c), "i" (s)); d;})
#define __builtin_spe2_evperm2(a,b,c)            ({__ev64_opaque__ d = a; __asm ("evperm2 %0,%1,%2"            : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evperm3(a,b,c)            ({__ev64_opaque__ d = a; __asm ("evperm3 %0,%1,%2"            : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evselbit(a,b,c)           ({__ev64_opaque__ d = a; __asm ("evselbit %0,%1,%2"           : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evselbitm0(a,b,c)         ({__ev64_opaque__ d = a; __asm ("evselbitm0 %0,%1,%2"         : "+r" (d) : "r" (b), "r" (c)); d;})
#define __builtin_spe2_evselbitm1(a,b,c)         ({__ev64_opaque__ d = a; __asm ("evselbitm1 %0,%1,%2"         : "+r" (d) : "r" (b), "r" (c)); d;})

// ============================================================================
// SPE2 extension
// See NXP manual SPE2PIM, Rev 1.0-2 08/2013
// Listed in order presented in the manual...
// ... but note that the manual repeats the original spe instructions
//     an empty line mark those places.
// ============================================================================

typedef char			__vector __ev64_s8__;
typedef unsigned char		__vector __ev64_u8__;


#define __ev_circinc               __builtin_spe2_circinc

#define __ev_absb                  __builtin_spe2_evabsb
#define __ev_absbs                 __builtin_spe2_evabsbs
#define __ev_absd                  __builtin_spe2_evabsd
#define __ev_absdifsb              __builtin_spe2_evabsdifsb
#define __ev_absdifsh              __builtin_spe2_evabsdifsh
#define __ev_absdifsw              __builtin_spe2_evabsdifsw
#define __ev_absdifub              __builtin_spe2_evabsdifub
#define __ev_absdifuh              __builtin_spe2_evabsdifuh
#define __ev_absdifuw              __builtin_spe2_evabsdifuw
#define __ev_absds                 __builtin_spe2_evabsds
#define __ev_absh                  __builtin_spe2_evabsh
#define __ev_abshs                 __builtin_spe2_evabshs
#define __ev_abss                  __builtin_spe2_evabss
#define __ev_add2subf2h            __builtin_spe2_evadd2subf2h
#define __ev_add2subf2hss          __builtin_spe2_evadd2subf2hss
#define __ev_addsmiaa              __builtin_spe2_evaddsmiaa
#define __ev_addb                  __builtin_spe2_evaddb
#define __ev_addbss                __builtin_spe2_evaddbss
#define __ev_addbus                __builtin_spe2_evaddbus
#define __ev_addd                  __builtin_spe2_evaddd
#define __ev_adddss                __builtin_spe2_evadddss
#define __ev_adddus                __builtin_spe2_evadddus
#define __ev_addh                  __builtin_spe2_evaddh
#define __ev_addhhisw              __builtin_spe2_evaddhhisw
#define __ev_addhhiuw              __builtin_spe2_evaddhhiuw
#define __ev_addhlosw              __builtin_spe2_evaddhlosw
#define __ev_addhlouw              __builtin_spe2_evaddhlouw
#define __ev_addhss                __builtin_spe2_evaddhss
#define __ev_addhus                __builtin_spe2_evaddhus
#define __ev_addhx                 __builtin_spe2_evaddhx
#define __ev_addhxss               __builtin_spe2_evaddhxss
#define __ev_addhxus               __builtin_spe2_evaddhxus
#define __ev_addib                 __builtin_spe2_evaddib
#define __ev_addih                 __builtin_spe2_evaddih

#define __ev_addssiaa              __builtin_spe2_evaddssiaa

#define __ev_addsubfh              __builtin_spe2_evaddsubfh
#define __ev_addsubfhss            __builtin_spe2_evaddsubfhss
#define __ev_addsubfhx             __builtin_spe2_evaddsubfhx
#define __ev_addsubfhxss           __builtin_spe2_evaddsubfhxss
#define __ev_addsubfw              __builtin_spe2_evaddsubfw
#define __ev_addsubfwss            __builtin_spe2_evaddsubfwss
#define __ev_addsubfwx             __builtin_spe2_evaddsubfwx
#define __ev_addsubfwxss           __builtin_spe2_evaddsubfwxss

#define __ev_addusiaa              __builtin_spe2_evaddusiaa

#define __ev_addwegsf              __builtin_spe2_evaddwegsf
#define __ev_addwegsi              __builtin_spe2_evaddwegsi
#define __ev_addwogsf              __builtin_spe2_evaddwogsf
#define __ev_addwogsi              __builtin_spe2_evaddwogsi
#define __ev_addwss                __builtin_spe2_evaddwss
#define __ev_addwus                __builtin_spe2_evaddwus
#define __ev_addwx                 __builtin_spe2_evaddwx
#define __ev_addwxss               __builtin_spe2_evaddwxss
#define __ev_addwxus               __builtin_spe2_evaddwxus

#define __ev_avgbs                 __builtin_spe2_evavgbs
#define __ev_avgbsr                __builtin_spe2_evavgbsr
#define __ev_avgbu                 __builtin_spe2_evavgbu
#define __ev_avgbur                __builtin_spe2_evavgbur
#define __ev_avgds                 __builtin_spe2_evavgds
#define __ev_avgdsr                __builtin_spe2_evavgdsr
#define __ev_avgdu                 __builtin_spe2_evavgdu
#define __ev_avgdur                __builtin_spe2_evavgdur
#define __ev_avghs                 __builtin_spe2_evavghs
#define __ev_avghsr                __builtin_spe2_evavghsr
#define __ev_avghu                 __builtin_spe2_evavghu
#define __ev_avghur                __builtin_spe2_evavghur
#define __ev_avgws                 __builtin_spe2_evavgws
#define __ev_avgwsr                __builtin_spe2_evavgwsr
#define __ev_avgwu                 __builtin_spe2_evavgwu
#define __ev_avgwur                __builtin_spe2_evavgwur
#define __ev_clrbe                 __builtin_spe2_evclrbe
#define __ev_clrbo                 __builtin_spe2_evclrbo
#define __ev_clrh                  __builtin_spe2_evclrh

#define __ev_cntlsh                __builtin_spe2_evcntlsh

#define __ev_cntlzh                __builtin_spe2_evcntlzh

#define __ev_diff2his              __builtin_spe2_evdiff2his
#define __ev_diff2hisa             __builtin_spe2_evdiff2hisa
#define __ev_diff2hisaaw           __builtin_spe2_evdiff2hisaaw
#define __ev_divs                  __builtin_spe2_evdivs
#define __ev_divu                  __builtin_spe2_evdivu

#define __ev_divwsf                __builtin_spe2_evdivwsf

#define __ev_divwuf                __builtin_spe2_evdivwuf
#define __ev_dlveb                 __builtin_spe2_evdlveb
#define __ev_dlveh                 __builtin_spe2_evdlveh
#define __ev_dlveob                __builtin_spe2_evdlveob
#define __ev_dlveoh                __builtin_spe2_evdlveoh
#define __ev_dlvob                 __builtin_spe2_evdlvob
#define __ev_dlvoeb                __builtin_spe2_evdlvoeb
#define __ev_dlvoeh                __builtin_spe2_evdlvoeh
#define __ev_dlvoh                 __builtin_spe2_evdlvoh
#define __ev_dotp4hgasmf           __builtin_spe2_evdotp4hgasmf
#define __ev_dotp4hgasmfa          __builtin_spe2_evdotp4hgasmfa
#define __ev_dotp4hgasmfaa         __builtin_spe2_evdotp4hgasmfaa
#define __ev_dotp4hgasmfaa3        __builtin_spe2_evdotp4hgasmfaa3
#define __ev_dotp4hgasmi           __builtin_spe2_evdotp4hgasmi
#define __ev_dotp4hgasmia          __builtin_spe2_evdotp4hgasmia
#define __ev_dotp4hgasmiaa         __builtin_spe2_evdotp4hgasmiaa
#define __ev_dotp4hgasmiaa3        __builtin_spe2_evdotp4hgasmiaa3
#define __ev_dotp4hgasumi          __builtin_spe2_evdotp4hgasumi
#define __ev_dotp4hgasumia         __builtin_spe2_evdotp4hgasumia
#define __ev_dotp4hgasumiaa        __builtin_spe2_evdotp4hgasumiaa
#define __ev_dotp4hgasumiaa3       __builtin_spe2_evdotp4hgasumiaa3
#define __ev_dotp4hgaumi           __builtin_spe2_evdotp4hgaumi
#define __ev_dotp4hgaumia          __builtin_spe2_evdotp4hgaumia
#define __ev_dotp4hgaumiaa         __builtin_spe2_evdotp4hgaumiaa
#define __ev_dotp4hgaumiaa3        __builtin_spe2_evdotp4hgaumiaa3
#define __ev_dotp4hgssmf           __builtin_spe2_evdotp4hgssmf
#define __ev_dotp4hgssmfa          __builtin_spe2_evdotp4hgssmfa
#define __ev_dotp4hgssmfaa         __builtin_spe2_evdotp4hgssmfaa
#define __ev_dotp4hgssmfaa3        __builtin_spe2_evdotp4hgssmfaa3
#define __ev_dotp4hgssmi           __builtin_spe2_evdotp4hgssmi
#define __ev_dotp4hgssmia          __builtin_spe2_evdotp4hgssmia
#define __ev_dotp4hgssmiaa         __builtin_spe2_evdotp4hgssmiaa
#define __ev_dotp4hgssmiaa3        __builtin_spe2_evdotp4hgssmiaa3
#define __ev_dotp4hxgasmf          __builtin_spe2_evdotp4hxgasmf
#define __ev_dotp4hxgasmfa         __builtin_spe2_evdotp4hxgasmfa
#define __ev_dotp4hxgasmfaa        __builtin_spe2_evdotp4hxgasmfaa
#define __ev_dotp4hxgasmfaa3       __builtin_spe2_evdotp4hxgasmfaa3
#define __ev_dotp4hxgasmi          __builtin_spe2_evdotp4hxgasmi
#define __ev_dotp4hxgasmia         __builtin_spe2_evdotp4hxgasmia
#define __ev_dotp4hxgasmiaa        __builtin_spe2_evdotp4hxgasmiaa
#define __ev_dotp4hxgasmiaa3       __builtin_spe2_evdotp4hxgasmiaa3
#define __ev_dotp4hxgssmf          __builtin_spe2_evdotp4hxgssmf
#define __ev_dotp4hxgssmfa         __builtin_spe2_evdotp4hxgssmfa
#define __ev_dotp4hxgssmfaa        __builtin_spe2_evdotp4hxgssmfaa
#define __ev_dotp4hxgssmfaa3       __builtin_spe2_evdotp4hxgssmfaa3
#define __ev_dotp4hxgssmi          __builtin_spe2_evdotp4hxgssmi
#define __ev_dotp4hxgssmia         __builtin_spe2_evdotp4hxgssmia
#define __ev_dotp4hxgssmiaa        __builtin_spe2_evdotp4hxgssmiaa
#define __ev_dotp4hxgssmiaa3       __builtin_spe2_evdotp4hxgssmiaa3
#define __ev_dotpbasmi             __builtin_spe2_evdotpbasmi
#define __ev_dotpbasmia            __builtin_spe2_evdotpbasmia
#define __ev_dotpbasmiaaw          __builtin_spe2_evdotpbasmiaaw
#define __ev_dotpbasmiaaw3         __builtin_spe2_evdotpbasmiaaw3
#define __ev_dotpbasumi            __builtin_spe2_evdotpbasumi
#define __ev_dotpbasumia           __builtin_spe2_evdotpbasumia
#define __ev_dotpbasumiaaw         __builtin_spe2_evdotpbasumiaaw
#define __ev_dotpbasumiaaw3        __builtin_spe2_evdotpbasumiaaw3
#define __ev_dotpbaumi             __builtin_spe2_evdotpbaumi
#define __ev_dotpbaumia            __builtin_spe2_evdotpbaumia
#define __ev_dotpbaumiaaw          __builtin_spe2_evdotpbaumiaaw
#define __ev_dotpbaumiaaw3         __builtin_spe2_evdotpbaumiaaw3
#define __ev_dotphasmi             __builtin_spe2_evdotphasmi
#define __ev_dotphasmia            __builtin_spe2_evdotphasmia
#define __ev_dotphasmiaaw          __builtin_spe2_evdotphasmiaaw
#define __ev_dotphasmiaaw3         __builtin_spe2_evdotphasmiaaw3
#define __ev_dotphassf             __builtin_spe2_evdotphassf
#define __ev_dotphassfa            __builtin_spe2_evdotphassfa
#define __ev_dotphassfaaw          __builtin_spe2_evdotphassfaaw
#define __ev_dotphassfaaw3         __builtin_spe2_evdotphassfaaw3
#define __ev_dotphassfr            __builtin_spe2_evdotphassfr
#define __ev_dotphassfra           __builtin_spe2_evdotphassfra
#define __ev_dotphassfraaw         __builtin_spe2_evdotphassfraaw
#define __ev_dotphassfraaw3        __builtin_spe2_evdotphassfraaw3
#define __ev_dotphassi             __builtin_spe2_evdotphassi
#define __ev_dotphassia            __builtin_spe2_evdotphassia
#define __ev_dotphassiaaw          __builtin_spe2_evdotphassiaaw
#define __ev_dotphassiaaw3         __builtin_spe2_evdotphassiaaw3
#define __ev_dotphasumi            __builtin_spe2_evdotphasumi
#define __ev_dotphasumia           __builtin_spe2_evdotphasumia
#define __ev_dotphasumiaaw         __builtin_spe2_evdotphasumiaaw
#define __ev_dotphasumiaaw3        __builtin_spe2_evdotphasumiaaw3
#define __ev_dotphasusi            __builtin_spe2_evdotphasusi
#define __ev_dotphasusia           __builtin_spe2_evdotphasusia
#define __ev_dotphasusiaaw         __builtin_spe2_evdotphasusiaaw
#define __ev_dotphasusiaaw3        __builtin_spe2_evdotphasusiaaw3
#define __ev_dotphaumi             __builtin_spe2_evdotphaumi
#define __ev_dotphaumia            __builtin_spe2_evdotphaumia
#define __ev_dotphaumiaaw          __builtin_spe2_evdotphaumiaaw
#define __ev_dotphaumiaaw3         __builtin_spe2_evdotphaumiaaw3
#define __ev_dotphausi             __builtin_spe2_evdotphausi
#define __ev_dotphausia            __builtin_spe2_evdotphausia
#define __ev_dotphausiaaw          __builtin_spe2_evdotphausiaaw
#define __ev_dotphausiaaw3         __builtin_spe2_evdotphausiaaw3
#define __ev_dotphihcsmi           __builtin_spe2_evdotphihcsmi
#define __ev_dotphihcsmia          __builtin_spe2_evdotphihcsmia
#define __ev_dotphihcsmiaaw        __builtin_spe2_evdotphihcsmiaaw
#define __ev_dotphihcsmiaaw3       __builtin_spe2_evdotphihcsmiaaw3
#define __ev_dotphihcssf           __builtin_spe2_evdotphihcssf
#define __ev_dotphihcssfa          __builtin_spe2_evdotphihcssfa
#define __ev_dotphihcssfaaw        __builtin_spe2_evdotphihcssfaaw
#define __ev_dotphihcssfaaw3       __builtin_spe2_evdotphihcssfaaw3
#define __ev_dotphihcssfr          __builtin_spe2_evdotphihcssfr
#define __ev_dotphihcssfra         __builtin_spe2_evdotphihcssfra
#define __ev_dotphihcssfraaw       __builtin_spe2_evdotphihcssfraaw
#define __ev_dotphihcssfraaw3      __builtin_spe2_evdotphihcssfraaw3
#define __ev_dotphihcssi           __builtin_spe2_evdotphihcssi
#define __ev_dotphihcssia          __builtin_spe2_evdotphihcssia
#define __ev_dotphihcssiaaw        __builtin_spe2_evdotphihcssiaaw
#define __ev_dotphihcssiaaw3       __builtin_spe2_evdotphihcssiaaw3
#define __ev_dotphssmi             __builtin_spe2_evdotphssmi
#define __ev_dotphssmia            __builtin_spe2_evdotphssmia
#define __ev_dotphssmiaaw          __builtin_spe2_evdotphssmiaaw
#define __ev_dotphssmiaaw3         __builtin_spe2_evdotphssmiaaw3
#define __ev_dotphsssf             __builtin_spe2_evdotphsssf
#define __ev_dotphsssfa            __builtin_spe2_evdotphsssfa
#define __ev_dotphsssfaaw          __builtin_spe2_evdotphsssfaaw
#define __ev_dotphsssfaaw3         __builtin_spe2_evdotphsssfaaw3
#define __ev_dotphsssfr            __builtin_spe2_evdotphsssfr
#define __ev_dotphsssfra           __builtin_spe2_evdotphsssfra
#define __ev_dotphsssfraaw         __builtin_spe2_evdotphsssfraaw
#define __ev_dotphsssfraaw3        __builtin_spe2_evdotphsssfraaw3
#define __ev_dotphsssi             __builtin_spe2_evdotphssmi        // Alias, since no overflow can occur
#define __ev_dotphsssia            __builtin_spe2_evdotphssmia       // Alias, since no overflow can occur
#define __ev_dotphsssiaaw          __builtin_spe2_evdotphsssiaaw
#define __ev_dotphsssiaaw3         __builtin_spe2_evdotphsssiaaw3
#define __ev_dotplohcsmi           __builtin_spe2_evdotplohcsmi
#define __ev_dotplohcsmia          __builtin_spe2_evdotplohcsmia
#define __ev_dotplohcsmiaaw        __builtin_spe2_evdotplohcsmiaaw
#define __ev_dotplohcsmiaaw3       __builtin_spe2_evdotplohcsmiaaw3
#define __ev_dotplohcssf           __builtin_spe2_evdotplohcssf
#define __ev_dotplohcssfa          __builtin_spe2_evdotplohcssfa
#define __ev_dotplohcssfaaw        __builtin_spe2_evdotplohcssfaaw
#define __ev_dotplohcssfaaw3       __builtin_spe2_evdotplohcssfaaw3
#define __ev_dotplohcssfr          __builtin_spe2_evdotplohcssfr
#define __ev_dotplohcssfra         __builtin_spe2_evdotplohcssfra
#define __ev_dotplohcssfraaw       __builtin_spe2_evdotplohcssfraaw
#define __ev_dotplohcssfraaw3      __builtin_spe2_evdotplohcssfraaw3
#define __ev_dotplohcssi           __builtin_spe2_evdotplohcssi
#define __ev_dotplohcssia          __builtin_spe2_evdotplohcssia
#define __ev_dotplohcssiaaw        __builtin_spe2_evdotplohcssiaaw
#define __ev_dotplohcssiaaw3       __builtin_spe2_evdotplohcssiaaw3
#define __ev_dotpwasmi             __builtin_spe2_evdotpwasmi
#define __ev_dotpwasmia            __builtin_spe2_evdotpwasmia
#define __ev_dotpwasmiaa           __builtin_spe2_evdotpwasmiaa
#define __ev_dotpwasmiaa3          __builtin_spe2_evdotpwasmiaa3
#define __ev_dotpwassi             __builtin_spe2_evdotpwassi
#define __ev_dotpwassia            __builtin_spe2_evdotpwassia
#define __ev_dotpwassiaa           __builtin_spe2_evdotpwassiaa
#define __ev_dotpwassiaa3          __builtin_spe2_evdotpwassiaa3
#define __ev_dotpwasumi            __builtin_spe2_evdotpwasumi
#define __ev_dotpwasumia           __builtin_spe2_evdotpwasumia
#define __ev_dotpwasumiaa          __builtin_spe2_evdotpwasumiaa
#define __ev_dotpwasumiaa3         __builtin_spe2_evdotpwasumiaa3
#define __ev_dotpwasusi            __builtin_spe2_evdotpwasusi
#define __ev_dotpwasusia           __builtin_spe2_evdotpwasusia
#define __ev_dotpwasusiaa          __builtin_spe2_evdotpwasusiaa
#define __ev_dotpwasusiaa3         __builtin_spe2_evdotpwasusiaa3
#define __ev_dotpwaumi             __builtin_spe2_evdotpwaumi
#define __ev_dotpwaumia            __builtin_spe2_evdotpwaumia
#define __ev_dotpwaumiaa           __builtin_spe2_evdotpwaumiaa
#define __ev_dotpwaumiaa3          __builtin_spe2_evdotpwaumiaa3
#define __ev_dotpwausi             __builtin_spe2_evdotpwausi
#define __ev_dotpwausia            __builtin_spe2_evdotpwausia
#define __ev_dotpwausiaa           __builtin_spe2_evdotpwausiaa
#define __ev_dotpwausiaa3          __builtin_spe2_evdotpwausiaa3
#define __ev_dotpwcsmi             __builtin_spe2_evdotpwcsmi
#define __ev_dotpwcsmia            __builtin_spe2_evdotpwcsmia
#define __ev_dotpwcsmiaaw          __builtin_spe2_evdotpwcsmiaaw
#define __ev_dotpwcsmiaaw3         __builtin_spe2_evdotpwcsmiaaw3
#define __ev_dotpwcssf             __builtin_spe2_evdotpwcssf
#define __ev_dotpwcssfa            __builtin_spe2_evdotpwcssfa
#define __ev_dotpwcssfaaw          __builtin_spe2_evdotpwcssfaaw
#define __ev_dotpwcssfaaw3         __builtin_spe2_evdotpwcssfaaw3
#define __ev_dotpwcssfr            __builtin_spe2_evdotpwcssfr
#define __ev_dotpwcssfra           __builtin_spe2_evdotpwcssfra
#define __ev_dotpwcssfraaw         __builtin_spe2_evdotpwcssfraaw
#define __ev_dotpwcssfraaw3        __builtin_spe2_evdotpwcssfraaw3
#define __ev_dotpwcssi             __builtin_spe2_evdotpwcssi
#define __ev_dotpwcssia            __builtin_spe2_evdotpwcssia
#define __ev_dotpwcssiaaw          __builtin_spe2_evdotpwcssiaaw
#define __ev_dotpwcssiaaw3         __builtin_spe2_evdotpwcssiaaw3
#define __ev_dotpwgasmf            __builtin_spe2_evdotpwgasmf
#define __ev_dotpwgasmfa           __builtin_spe2_evdotpwgasmfa
#define __ev_dotpwgasmfaa          __builtin_spe2_evdotpwgasmfaa
#define __ev_dotpwgasmfaa3         __builtin_spe2_evdotpwgasmfaa3
#define __ev_dotpwgasmfr           __builtin_spe2_evdotpwgasmfr
#define __ev_dotpwgasmfra          __builtin_spe2_evdotpwgasmfra
#define __ev_dotpwgasmfraa         __builtin_spe2_evdotpwgasmfraa
#define __ev_dotpwgasmfraa3        __builtin_spe2_evdotpwgasmfraa3
#define __ev_dotpwgssmf            __builtin_spe2_evdotpwgssmf
#define __ev_dotpwgssmfa           __builtin_spe2_evdotpwgssmfa
#define __ev_dotpwgssmfaa          __builtin_spe2_evdotpwgssmfaa
#define __ev_dotpwgssmfaa3         __builtin_spe2_evdotpwgssmfaa3
#define __ev_dotpwgssmfr           __builtin_spe2_evdotpwgssmfr
#define __ev_dotpwgssmfra          __builtin_spe2_evdotpwgssmfra
#define __ev_dotpwgssmfraa         __builtin_spe2_evdotpwgssmfraa
#define __ev_dotpwgssmfraa3        __builtin_spe2_evdotpwgssmfraa3
#define __ev_dotpwssmi             __builtin_spe2_evdotpwssmi
#define __ev_dotpwssmia            __builtin_spe2_evdotpwssmia
#define __ev_dotpwssmiaa           __builtin_spe2_evdotpwssmiaa
#define __ev_dotpwssmiaa3          __builtin_spe2_evdotpwssmiaa3
#define __ev_dotpwsssi             __builtin_spe2_evdotpwssmi        // Alias, since no overflow can occur
#define __ev_dotpwsssia            __builtin_spe2_evdotpwsssia       // Alias, since no overflow can occur
#define __ev_dotpwsssiaa           __builtin_spe2_evdotpwsssiaa
#define __ev_dotpwsssiaa3          __builtin_spe2_evdotpwsssiaa3
#define __ev_dotpwxgasmf           __builtin_spe2_evdotpwxgasmf
#define __ev_dotpwxgasmfa          __builtin_spe2_evdotpwxgasmfa
#define __ev_dotpwxgasmfaa         __builtin_spe2_evdotpwxgasmfaa
#define __ev_dotpwxgasmfaa3        __builtin_spe2_evdotpwxgasmfaa3
#define __ev_dotpwxgasmfr          __builtin_spe2_evdotpwxgasmfr
#define __ev_dotpwxgasmfra         __builtin_spe2_evdotpwxgasmfra
#define __ev_dotpwxgasmfraa        __builtin_spe2_evdotpwxgasmfraa
#define __ev_dotpwxgasmfraa3       __builtin_spe2_evdotpwxgasmfraa3
#define __ev_dotpwxgssmf           __builtin_spe2_evdotpwxgssmf
#define __ev_dotpwxgssmfa          __builtin_spe2_evdotpwxgssmfa
#define __ev_dotpwxgssmfaa         __builtin_spe2_evdotpwxgssmfaa
#define __ev_dotpwxgssmfaa3        __builtin_spe2_evdotpwxgssmfaa3
#define __ev_dotpwxgssmfr          __builtin_spe2_evdotpwxgssmfr
#define __ev_dotpwxgssmfra         __builtin_spe2_evdotpwxgssmfra
#define __ev_dotpwxgssmfraa        __builtin_spe2_evdotpwxgssmfraa
#define __ev_dotpwxgssmfraa3       __builtin_spe2_evdotpwxgssmfraa3

#define __ev_extsbh                __builtin_spe2_evextsbh

#define __ev_extsw                 __builtin_spe2_evextsw
#define __ev_extzb                 __builtin_spe2_evextzb
#define __ev_insb                  __builtin_spe2_evinsb
#define __ev_insh                  __builtin_spe2_evinsh
#define __ev_ilveh                 __builtin_spe2_evilveh
#define __ev_ilveoh                __builtin_spe2_evilveoh
#define __ev_ilvhih                __builtin_spe2_evilvhih
#define __ev_ilvhiloh              __builtin_spe2_evilvhiloh
#define __ev_ilvloh                __builtin_spe2_evilvloh
#define __ev_ilvlohih              __builtin_spe2_evilvlohih
#define __ev_ilvoeh                __builtin_spe2_evilvoeh
#define __ev_ilvoh                 __builtin_spe2_evilvoh
#define __ev_lbbsplatb             __builtin_spe2_evlbbsplatb
#define __ev_lbbsplatbu            __builtin_spe2_evlbbsplatbu
#define __ev_lbbsplatbx            __builtin_spe2_evlbbsplatbx
#define __ev_lbbsplatbmx           __builtin_spe2_evlbbsplatbmx
#define __ev_ldb                   __builtin_spe2_evldb
#define __ev_ldbu                  __builtin_spe2_evldbu
#define __ev_ldbx                  __builtin_spe2_evldbx
#define __ev_ldbmx                 __builtin_spe2_evldbmx

#define __ev_lddu                  __builtin_spe2_evlddu
#define __ev_lddmx                 __builtin_spe2_evlddmx

#define __ev_ldhu                  __builtin_spe2_evldhu
#define __ev_ldhmx                 __builtin_spe2_evldhmx

#define __ev_ldwu                  __builtin_spe2_evldwu
#define __ev_ldwmx                 __builtin_spe2_evldwmx

#define __ev_lhhesplatu            __builtin_spe2_evlhhesplatu
#define __ev_lhhesplatmx           __builtin_spe2_evlhhesplatmx

#define __ev_lhhossplatu           __builtin_spe2_evlhhossplatu
#define __ev_lhhossplatmx          __builtin_spe2_evlhhossplatmx

#define __ev_lhhousplatu           __builtin_spe2_evlhhousplatu
#define __ev_lhhousplatmx          __builtin_spe2_evlhhousplatmx
#define __ev_lhhsplath             __builtin_spe2_evlhhsplath
#define __ev_lhhsplathu            __builtin_spe2_evlhhsplathu
#define __ev_lhhsplathx            __builtin_spe2_evlhhsplathx
#define __ev_lhhsplathmx           __builtin_spe2_evlhhsplathmx

#define __ev_lvsl                  __builtin_spe2_evlvsl
#define __ev_lvsr                  __builtin_spe2_evlvsr
#define __ev_lwbe                  __builtin_spe2_evlwbe
#define __ev_lwbeu                 __builtin_spe2_evlwbeu
#define __ev_lwbex                 __builtin_spe2_evlwbex
#define __ev_lwbemx                __builtin_spe2_evlwbemx
#define __ev_lwbos                 __builtin_spe2_evlwbos
#define __ev_lwbosu                __builtin_spe2_evlwbosu
#define __ev_lwbosx                __builtin_spe2_evlwbosx
#define __ev_lwbosmx               __builtin_spe2_evlwbosmx
#define __ev_lwbou                 __builtin_spe2_evlwbou
#define __ev_lwbouu                __builtin_spe2_evlwbouu
#define __ev_lwboux                __builtin_spe2_evlwboux
#define __ev_lwboumx               __builtin_spe2_evlwboumx
#define __ev_lwbsplatw             __builtin_spe2_evlwbsplatw
#define __ev_lwbsplatwu            __builtin_spe2_evlwbsplatwu
#define __ev_lwbsplatwx            __builtin_spe2_evlwbsplatwx
#define __ev_lwbsplatwmx           __builtin_spe2_evlwbsplatwmx

#define __ev_lwheu                 __builtin_spe2_evlwheu
#define __ev_lwhemx                __builtin_spe2_evlwhemx

#define __ev_lwhosu                __builtin_spe2_evlwhosu
#define __ev_lwhosmx               __builtin_spe2_evlwhosmx

#define __ev_lwhouu                __builtin_spe2_evlwhouu
#define __ev_lwhoumx               __builtin_spe2_evlwhoumx

#define __ev_lwhsplatu             __builtin_spe2_evlwhsplatu

#define __ev_lwhsplatw             __builtin_spe2_evlwhsplatw
#define __ev_lwhsplatwu            __builtin_spe2_evlwhsplatwu
#define __ev_lwhsplatwx            __builtin_spe2_evlwhsplatwx
#define __ev_lwhsplatwmx           __builtin_spe2_evlwhsplatwmx
#define __ev_lwhsplatmx            __builtin_spe2_evlwhsplatmx

#define __ev_lwwsplatu             __builtin_spe2_evlwwsplatu
#define __ev_lwwsplatmx            __builtin_spe2_evlwwsplatmx

#define __ev_mar                   __builtin_spe2_evmar
#define __ev_maxbpsh               __builtin_spe2_evmaxbpsh
#define __ev_maxbpuh               __builtin_spe2_evmaxbpuh
#define __ev_maxbs                 __builtin_spe2_evmaxbs
#define __ev_maxbu                 __builtin_spe2_evmaxbu
#define __ev_maxds                 __builtin_spe2_evmaxds
#define __ev_maxdu                 __builtin_spe2_evmaxdu
#define __ev_maxhpsw               __builtin_spe2_evmaxhpsw
#define __ev_maxhpuw               __builtin_spe2_evmaxhpuw
#define __ev_maxhs                 __builtin_spe2_evmaxhs
#define __ev_maxhu                 __builtin_spe2_evmaxhu
#define __ev_maxmagws              __builtin_spe2_evmaxmagws
#define __ev_maxwpsd               __builtin_spe2_evmaxwpsd
#define __ev_maxwpud               __builtin_spe2_evmaxwpud
#define __ev_maxws                 __builtin_spe2_evmaxws
#define __ev_maxwu                 __builtin_spe2_evmaxwu
#define __ev_mbesmi                __builtin_spe2_evmbesmi
#define __ev_mbesmia               __builtin_spe2_evmbesmia
#define __ev_mbesmiaah             __builtin_spe2_evmbesmiaah
#define __ev_mbesmianh             __builtin_spe2_evmbesmianh
#define __ev_mbessiaah             __builtin_spe2_evmbessiaah
#define __ev_mbessianh             __builtin_spe2_evmbessianh
#define __ev_mbesumi               __builtin_spe2_evmbesumi
#define __ev_mbesumia              __builtin_spe2_evmbesumia
#define __ev_mbesumiaah            __builtin_spe2_evmbesumiaah
#define __ev_mbesumianh            __builtin_spe2_evmbesumianh
#define __ev_mbesusiaah            __builtin_spe2_evmbesusiaah
#define __ev_mbesusianh            __builtin_spe2_evmbesusianh
#define __ev_mbeumi                __builtin_spe2_evmbeumi
#define __ev_mbeumia               __builtin_spe2_evmbeumia
#define __ev_mbeumiaah             __builtin_spe2_evmbeumiaah
#define __ev_mbeumianh             __builtin_spe2_evmbeumianh
#define __ev_mbeusiaah             __builtin_spe2_evmbeusiaah
#define __ev_mbeusianh             __builtin_spe2_evmbeusianh
#define __ev_mbosmi                __builtin_spe2_evmbosmi
#define __ev_mbosmia               __builtin_spe2_evmbosmia
#define __ev_mbosmiaah             __builtin_spe2_evmbosmiaah
#define __ev_mbosmianh             __builtin_spe2_evmbosmianh
#define __ev_mbossiaah             __builtin_spe2_evmbossiaah
#define __ev_mbossianh             __builtin_spe2_evmbossianh
#define __ev_mbosumi               __builtin_spe2_evmbosumi
#define __ev_mbosumia              __builtin_spe2_evmbosumia
#define __ev_mbosumiaah            __builtin_spe2_evmbosumiaah
#define __ev_mbosumianh            __builtin_spe2_evmbosumianh
#define __ev_mbosusiaah            __builtin_spe2_evmbosusiaah
#define __ev_mbosusianh            __builtin_spe2_evmbosusianh
#define __ev_mboumi                __builtin_spe2_evmboumi
#define __ev_mboumia               __builtin_spe2_evmboumia
#define __ev_mboumiaah             __builtin_spe2_evmboumiaah
#define __ev_mboumianh             __builtin_spe2_evmboumianh
#define __ev_mbousiaah             __builtin_spe2_evmbousiaah
#define __ev_mbousianh             __builtin_spe2_evmbousianh

#define __ev_mhesumi               __builtin_spe2_evmhesumi
#define __ev_mhesumia              __builtin_spe2_evmhesumia
#define __ev_mhesumiaaw            __builtin_spe2_evmhesumiaaw
#define __ev_mhesumianw            __builtin_spe2_evmhesumianw
#define __ev_mhesusiaaw            __builtin_spe2_evmhesusiaaw
#define __ev_mhesusianw            __builtin_spe2_evmhesusianw

#define __ev_mhosumi               __builtin_spe2_evmhosumi
#define __ev_mhosumia              __builtin_spe2_evmhosumia
#define __ev_mhosumiaaw            __builtin_spe2_evmhosumiaaw
#define __ev_mhosumianw            __builtin_spe2_evmhosumianw
#define __ev_mhosusiaaw            __builtin_spe2_evmhosusiaaw
#define __ev_mhosusianw            __builtin_spe2_evmhosusianw

#define __ev_mhssf                 __builtin_spe2_evmhssf
#define __ev_mhssfr                __builtin_spe2_evmhssfr
#define __ev_mhssi                 __builtin_spe2_evmhssi
#define __ev_mhsusi                __builtin_spe2_evmhsusi
#define __ev_mhumi                 __builtin_spe2_evmhumi
#define __ev_mhusi                 __builtin_spe2_evmhusi
#define __ev_minbpsh               __builtin_spe2_evminbpsh
#define __ev_minbpuh               __builtin_spe2_evminbpuh
#define __ev_minbs                 __builtin_spe2_evminbs
#define __ev_minbu                 __builtin_spe2_evminbu
#define __ev_minds                 __builtin_spe2_evminds
#define __ev_mindu                 __builtin_spe2_evmindu
#define __ev_minhpsw               __builtin_spe2_evminhpsw
#define __ev_minhpuw               __builtin_spe2_evminhpuw
#define __ev_minhs                 __builtin_spe2_evminhs
#define __ev_minhu                 __builtin_spe2_evminhu
#define __ev_minwpsd               __builtin_spe2_evminwpsd
#define __ev_minwpud               __builtin_spe2_evminwpud
#define __ev_minws                 __builtin_spe2_evminws
#define __ev_minwu                 __builtin_spe2_evminwu

#define __ev_mwehgsmf              __builtin_spe2_evmwehgsmf
#define __ev_mwehgsmfa             __builtin_spe2_evmwehgsmfa
#define __ev_mwehgsmfaa            __builtin_spe2_evmwehgsmfaa
#define __ev_mwehgsmfan            __builtin_spe2_evmwehgsmfan
#define __ev_mwehgsmfr             __builtin_spe2_evmwehgsmfr
#define __ev_mwehgsmfra            __builtin_spe2_evmwehgsmfra
#define __ev_mwehgsmfraa           __builtin_spe2_evmwehgsmfraa
#define __ev_mwehgsmfran           __builtin_spe2_evmwehgsmfran

#define __ev_mwhssfaaw             __builtin_spe2_evmwhssfaaw
#define __ev_mwhssfaaw3            __builtin_spe2_evmwhssfaaw3
#define __ev_mwhssfanw             __builtin_spe2_evmwhssfanw
#define __ev_mwhssfanw3            __builtin_spe2_evmwhssfanw3
#define __ev_mwhssfr               __builtin_spe2_evmwhssfr
#define __ev_mwhssfra              __builtin_spe2_evmwhssfra
#define __ev_mwhssfraaw            __builtin_spe2_evmwhssfraaw
#define __ev_mwhssfraaw3           __builtin_spe2_evmwhssfraaw3
#define __ev_mwhssfranw            __builtin_spe2_evmwhssfranw
#define __ev_mwhssfranw3           __builtin_spe2_evmwhssfranw3
#define __ev_mwlsmiaaw3            __builtin_spe2_evmwlsmiaaw3
#define __ev_mwlsmianw3            __builtin_spe2_evmwlsmianw3
#define __ev_mwlssiaaw3            __builtin_spe2_evmwlssiaaw3
#define __ev_mwlssianw3            __builtin_spe2_evmwlssianw3
#define __ev_mwlumiaaw3            __builtin_spe2_evmwlumiaaw3
#define __ev_mwlumianw3            __builtin_spe2_evmwlumianw3
#define __ev_mwlusiaaw3            __builtin_spe2_evmwlusiaaw3
#define __ev_mwlusianw3            __builtin_spe2_evmwlusianw3
#define __ev_mwohgsmf              __builtin_spe2_evmwohgsmf
#define __ev_mwohgsmfa             __builtin_spe2_evmwohgsmfa
#define __ev_mwohgsmfaa            __builtin_spe2_evmwohgsmfaa
#define __ev_mwohgsmfan            __builtin_spe2_evmwohgsmfan
#define __ev_mwohgsmfr             __builtin_spe2_evmwohgsmfr
#define __ev_mwohgsmfra            __builtin_spe2_evmwohgsmfra
#define __ev_mwohgsmfraa           __builtin_spe2_evmwohgsmfraa
#define __ev_mwohgsmfran           __builtin_spe2_evmwohgsmfran

#define __ev_mwssiaa               __builtin_spe2_evmwssiaa
#define __ev_mwssian               __builtin_spe2_evmwssian
#define __ev_mwssiw                __builtin_spe2_evmwssiw

#define __ev_mwusiaa               __builtin_spe2_evmwusiaa
#define __ev_mwusian               __builtin_spe2_evmwusian
#define __ev_mwusiw                __builtin_spe2_evmwusiw

#define __ev_negb                  __builtin_spe2_evnegb
#define __ev_negbo                 __builtin_spe2_evnegbo
#define __ev_negbos                __builtin_spe2_evnegbos
#define __ev_negbs                 __builtin_spe2_evnegbs
#define __ev_negd                  __builtin_spe2_evnegd
#define __ev_negds                 __builtin_spe2_evnegds
#define __ev_negh                  __builtin_spe2_evnegh
#define __ev_negho                 __builtin_spe2_evnegho
#define __ev_neghos                __builtin_spe2_evneghos
#define __ev_neghs                 __builtin_spe2_evneghs
#define __ev_negs                  __builtin_spe2_evnegs
#define __ev_negwo                 __builtin_spe2_evnegwo
#define __ev_negwos                __builtin_spe2_evnegwos

#define __ev_perm                  __builtin_spe2_evperm
#define __ev_perm2                 __builtin_spe2_evperm2
#define __ev_perm3                 __builtin_spe2_evperm3
#define __ev_pksdshefrs            __builtin_spe2_evpksdshefrs
#define __ev_pksdswfrs             __builtin_spe2_evpksdswfrs
#define __ev_pksdsws               __builtin_spe2_evpksdsws
#define __ev_pkshsbs               __builtin_spe2_evpkshsbs
#define __ev_pkshubs               __builtin_spe2_evpkshubs
#define __ev_pkswgshefrs           __builtin_spe2_evpkswgshefrs
#define __ev_pkswgswfrs            __builtin_spe2_evpkswgswfrs
#define __ev_pkswshfrs             __builtin_spe2_evpkswshfrs
#define __ev_pkswshilvfrs          __builtin_spe2_evpkswshilvfrs
#define __ev_pkswshilvs            __builtin_spe2_evpkswshilvs
#define __ev_pkswshs               __builtin_spe2_evpkswshs
#define __ev_pkswuhs               __builtin_spe2_evpkswuhs
#define __ev_pkuduws               __builtin_spe2_evpkuduws
#define __ev_pkuhubs               __builtin_spe2_evpkuhubs
#define __ev_pkuwuhs               __builtin_spe2_evpkuwuhs
#define __ev_popcntb               __builtin_spe2_evpopcntb
#define __ev_rlb                   __builtin_spe2_evrlb
#define __ev_rlbi                  __builtin_spe2_evrlbi
#define __ev_rlh                   __builtin_spe2_evrlh
#define __ev_rlhi                  __builtin_spe2_evrlhi

#define __ev_rnddnw                __builtin_spe2_evrnddnw
#define __ev_rnddnwss              __builtin_spe2_evrnddnwss
#define __ev_rnddnwus              __builtin_spe2_evrnddnwus
#define __ev_rnddw                 __builtin_spe2_evrnddw
#define __ev_rnddwss               __builtin_spe2_evrnddwss
#define __ev_rnddwus               __builtin_spe2_evrnddwus
#define __ev_rndhb                 __builtin_spe2_evrndhb
#define __ev_rndhbss               __builtin_spe2_evrndhbss
#define __ev_rndhbus               __builtin_spe2_evrndhbus
#define __ev_rndhnb                __builtin_spe2_evrndhnb
#define __ev_rndhnbss              __builtin_spe2_evrndhnbss
#define __ev_rndhnbus              __builtin_spe2_evrndhnbus
#define __ev_rndwh                 __builtin_spe2_evrndwh
#define __ev_rndwhss               __builtin_spe2_evrndwhss
#define __ev_rndwhus               __builtin_spe2_evrndwhus
#define __ev_rndwnh                __builtin_spe2_evrndwnh
#define __ev_rndwnhss              __builtin_spe2_evrndwnhss
#define __ev_rndwnhus              __builtin_spe2_evrndwnhus
#define __ev_sad2sh                __builtin_spe2_evsad2sh
#define __ev_sad2sha               __builtin_spe2_evsad2sha
#define __ev_sad2shaaw             __builtin_spe2_evsad2shaaw
#define __ev_sad2uh                __builtin_spe2_evsad2uh
#define __ev_sad2uha               __builtin_spe2_evsad2uha
#define __ev_sad2uhaaw             __builtin_spe2_evsad2uhaaw
#define __ev_sad4sb                __builtin_spe2_evsad4sb
#define __ev_sad4sba               __builtin_spe2_evsad4sba
#define __ev_sad4sbaaw             __builtin_spe2_evsad4sbaaw
#define __ev_sad4ub                __builtin_spe2_evsad4ub
#define __ev_sad4uba               __builtin_spe2_evsad4uba
#define __ev_sad4ubaaw             __builtin_spe2_evsad4ubaaw
#define __ev_sadsw                 __builtin_spe2_evsadsw
#define __ev_sadswa                __builtin_spe2_evsadswa
#define __ev_sadswaa               __builtin_spe2_evsadswaa
#define __ev_saduw                 __builtin_spe2_evsaduw
#define __ev_saduwa                __builtin_spe2_evsaduwa
#define __ev_saduwaa               __builtin_spe2_evsaduwaa
#define __ev_satsbub               __builtin_spe2_evsatsbub
#define __ev_satsdsw               __builtin_spe2_evsatsdsw
#define __ev_satsduw               __builtin_spe2_evsatsduw
#define __ev_satshsb               __builtin_spe2_evsatshsb
#define __ev_satshub               __builtin_spe2_evsatshub
#define __ev_satshuh               __builtin_spe2_evsatshuh
#define __ev_satswgsdf             __builtin_spe2_evsatswgsdf
#define __ev_satswsh               __builtin_spe2_evsatswsh
#define __ev_satswuh               __builtin_spe2_evsatswuh
#define __ev_satswuw               __builtin_spe2_evsatswuw
#define __ev_satuduw               __builtin_spe2_evsatuduw
#define __ev_satubsb               __builtin_spe2_evsatubsb
#define __ev_satuhsh               __builtin_spe2_evsatuhsh
#define __ev_satuhub               __builtin_spe2_evsatuhub
#define __ev_satuwsw               __builtin_spe2_evsatuwsw
#define __ev_satuwuh               __builtin_spe2_evsatuwuh

#define __ev_selbit                __builtin_spe2_evselbit
#define __ev_selbitm0              __builtin_spe2_evselbitm0
#define __ev_selbitm1              __builtin_spe2_evselbitm1
#define __ev_seteqb                __builtin_spe2_evseteqb
#define __ev_seteqb_rc             __builtin_spe2_evseteqb_rc
#define __ev_seteqh                __builtin_spe2_evseteqh
#define __ev_seteqh_rc             __builtin_spe2_evseteqh_rc
#define __ev_seteqw                __builtin_spe2_evseteqw
#define __ev_seteqw_rc             __builtin_spe2_evseteqw_rc
#define __ev_setgtbs               __builtin_spe2_evsetgtbs
#define __ev_setgtbs_rc            __builtin_spe2_evsetgtbs_rc
#define __ev_setgtbu               __builtin_spe2_evsetgtbu
#define __ev_setgtbu_rc            __builtin_spe2_evsetgtbu_rc
#define __ev_setgths               __builtin_spe2_evsetgths
#define __ev_setgths_rc            __builtin_spe2_evsetgths_rc
#define __ev_setgthu               __builtin_spe2_evsetgthu
#define __ev_setgthu_rc            __builtin_spe2_evsetgthu_rc
#define __ev_setgtws               __builtin_spe2_evsetgtws
#define __ev_setgtws_rc            __builtin_spe2_evsetgtws_rc
#define __ev_setgtwu               __builtin_spe2_evsetgtwu
#define __ev_setgtwu_rc            __builtin_spe2_evsetgtwu_rc
#define __ev_setltbs               __builtin_spe2_evsetltbs
#define __ev_setltbs_rc            __builtin_spe2_evsetltbs_rc
#define __ev_setltbu               __builtin_spe2_evsetltbu
#define __ev_setltbu_rc            __builtin_spe2_evsetltbu_rc
#define __ev_setlths               __builtin_spe2_evsetlths
#define __ev_setlths_rc            __builtin_spe2_evsetlths_rc
#define __ev_setlthu               __builtin_spe2_evsetlthu
#define __ev_setlthu_rc            __builtin_spe2_evsetlthu_rc
#define __ev_setltws               __builtin_spe2_evsetltws
#define __ev_setltws_rc            __builtin_spe2_evsetltws_rc
#define __ev_setltwu               __builtin_spe2_evsetltwu
#define __ev_setltwu_rc            __builtin_spe2_evsetltwu_rc
#define __ev_sl                    __builtin_spe2_evsl
#define __ev_sli                   __builtin_spe2_evsli
#define __ev_slb                   __builtin_spe2_evslb
#define __ev_slbi                  __builtin_spe2_evslbi
#define __ev_slh                   __builtin_spe2_evslh
#define __ev_slhi                  __builtin_spe2_evslhi
#define __ev_sloi                  __builtin_spe2_evsloi

#define __ev_splatb                __builtin_spe2_evsplatb

#define __ev_splatfia              __builtin_spe2_evsplatfia
#define __ev_splatfib              __builtin_spe2_evsplatfib
#define __ev_splatfiba             __builtin_spe2_evsplatfiba
#define __ev_splatfibo             __builtin_spe2_evsplatfibo
#define __ev_splatfiboa            __builtin_spe2_evsplatfiboa
#define __ev_splatfid              __builtin_spe2_evsplatfid
#define __ev_splatfida             __builtin_spe2_evsplatfida
#define __ev_splatfih              __builtin_spe2_evsplatfih
#define __ev_splatfiha             __builtin_spe2_evsplatfiha
#define __ev_splatfiho             __builtin_spe2_evsplatfiho
#define __ev_splatfihoa            __builtin_spe2_evsplatfihoa
#define __ev_splatfio              __builtin_spe2_evsplatfio
#define __ev_splatfioa             __builtin_spe2_evsplatfioa
#define __ev_splath                __builtin_spe2_evsplath
#define __ev_splatia               __builtin_spe2_evsplatia
#define __ev_splatib               __builtin_spe2_evsplatib
#define __ev_splatiba              __builtin_spe2_evsplatiba
#define __ev_splatibe              __builtin_spe2_evsplatibe
#define __ev_splatibea             __builtin_spe2_evsplatibea
#define __ev_splatid               __builtin_spe2_evsplatid
#define __ev_splatida              __builtin_spe2_evsplatida
#define __ev_splatie               __builtin_spe2_evsplatie
#define __ev_splatiea              __builtin_spe2_evsplatiea
#define __ev_splatih               __builtin_spe2_evsplatih
#define __ev_splatiha              __builtin_spe2_evsplatiha
#define __ev_splatihe              __builtin_spe2_evsplatihe
#define __ev_splatihea             __builtin_spe2_evsplatihea
#define __ev_srbis                 __builtin_spe2_evsrbis
#define __ev_srbiu                 __builtin_spe2_evsrbiu
#define __ev_srbs                  __builtin_spe2_evsrbs
#define __ev_srbu                  __builtin_spe2_evsrbu
#define __ev_srhis                 __builtin_spe2_evsrhis
#define __ev_srhiu                 __builtin_spe2_evsrhiu
#define __ev_srhs                  __builtin_spe2_evsrhs
#define __ev_srhu                  __builtin_spe2_evsrhu
#define __ev_sris                  __builtin_spe2_evsris
#define __ev_sriu                  __builtin_spe2_evsriu
#define __ev_srois                 __builtin_spe2_evsrois
#define __ev_sroiu                 __builtin_spe2_evsroiu
#define __ev_srs                   __builtin_spe2_evsrs
#define __ev_sru                   __builtin_spe2_evsru

#define __ev_stdb                  __builtin_spe2_evstdb
#define __ev_stdbu                 __builtin_spe2_evstdbu
#define __ev_stdbx                 __builtin_spe2_evstdbx
#define __ev_stdbmx                __builtin_spe2_evstdbmx

#define __ev_stddu                 __builtin_spe2_evstddu
#define __ev_stddmx                __builtin_spe2_evstddmx

#define __ev_stdhu                 __builtin_spe2_evstdhu
#define __ev_stdhmx                __builtin_spe2_evstdhmx

#define __ev_stdwu                 __builtin_spe2_evstdwu
#define __ev_stdwmx                __builtin_spe2_evstdwmx

#define __ev_sthb                  __builtin_spe2_evsthb
#define __ev_sthbu                 __builtin_spe2_evsthbu
#define __ev_sthbx                 __builtin_spe2_evsthbx
#define __ev_sthbmx                __builtin_spe2_evsthbmx
#define __ev_stwb                  __builtin_spe2_evstwb
#define __ev_stwbu                 __builtin_spe2_evstwbu
#define __ev_stwbx                 __builtin_spe2_evstwbx
#define __ev_stwbmx                __builtin_spe2_evstwbmx
#define __ev_stwbe                 __builtin_spe2_evstwbe
#define __ev_stwbeu                __builtin_spe2_evstwbeu
#define __ev_stwbex                __builtin_spe2_evstwbex
#define __ev_stwbemx               __builtin_spe2_evstwbemx
#define __ev_stwbo                 __builtin_spe2_evstwbo
#define __ev_stwbou                __builtin_spe2_evstwbou
#define __ev_stwbox                __builtin_spe2_evstwbox
#define __ev_stwbomx               __builtin_spe2_evstwbomx

#define __ev_stwheu                __builtin_spe2_evstwheu
#define __ev_stwhemx               __builtin_spe2_evstwhemx

#define __ev_stwhou                __builtin_spe2_evstwhou
#define __ev_stwhomx               __builtin_spe2_evstwhomx

#define __ev_stwweu                __builtin_spe2_evstwweu
#define __ev_stwwemx               __builtin_spe2_evstwwemx

#define __ev_stwwou                __builtin_spe2_evstwwou
#define __ev_stwwomx               __builtin_spe2_evstwwomx
#define __ev_subf2add2h            __builtin_spe2_evsubf2add2h
#define __ev_subf2add2hss          __builtin_spe2_evsubf2add2hss
#define __ev_subfaddh              __builtin_spe2_evsubfaddh
#define __ev_subfaddhss            __builtin_spe2_evsubfaddhss
#define __ev_subfaddhx             __builtin_spe2_evsubfaddhx
#define __ev_subfaddhxss           __builtin_spe2_evsubfaddhxss
#define __ev_subfaddw              __builtin_spe2_evsubfaddw
#define __ev_subfaddwss            __builtin_spe2_evsubfaddwss
#define __ev_subfaddwx             __builtin_spe2_evsubfaddwx
#define __ev_subfaddwxss           __builtin_spe2_evsubfaddwxss
#define __ev_subfb                 __builtin_spe2_evsubfb
#define __ev_subfbss               __builtin_spe2_evsubfbss
#define __ev_subfbus               __builtin_spe2_evsubfbus
#define __ev_subfd                 __builtin_spe2_evsubfd
#define __ev_subfdss               __builtin_spe2_evsubfdss
#define __ev_subfdus               __builtin_spe2_evsubfdus
#define __ev_subfh                 __builtin_spe2_evsubfh
#define __ev_subfhhisw             __builtin_spe2_evsubfhhisw
#define __ev_subfhhiuw             __builtin_spe2_evsubfhhiuw
#define __ev_subfhlosw             __builtin_spe2_evsubfhlosw
#define __ev_subfhlouw             __builtin_spe2_evsubfhlouw
#define __ev_subfhss               __builtin_spe2_evsubfhss
#define __ev_subfhus               __builtin_spe2_evsubfhus
#define __ev_subfhx                __builtin_spe2_evsubfhx
#define __ev_subfhxss              __builtin_spe2_evsubfhxss
#define __ev_subfhxus              __builtin_spe2_evsubfhxus
#define __ev_subfsmiaa             __builtin_spe2_evsubfsmiaa

#define __ev_subfssiaa             __builtin_spe2_evsubfssiaa

#define __ev_subfusiaa             __builtin_spe2_evsubfusiaa

#define __ev_subfwegsf             __builtin_spe2_evsubfwegsf
#define __ev_subfwegsi             __builtin_spe2_evsubfwegsi
#define __ev_subfwogsf             __builtin_spe2_evsubfwogsf
#define __ev_subfwogsi             __builtin_spe2_evsubfwogsi
#define __ev_subfwss               __builtin_spe2_evsubfwss
#define __ev_subfwus               __builtin_spe2_evsubfwus
#define __ev_subfwx                __builtin_spe2_evsubfwx
#define __ev_subfwxss              __builtin_spe2_evsubfwxss
#define __ev_subfwxus              __builtin_spe2_evsubfwxus
#define __ev_subifb(a,b)           __builtin_spe2_evsubifb ((b), (a))
#define __ev_subifh(a,b)           __builtin_spe2_evsubifh ((b), (a))

#define __ev_sum2his               __builtin_spe2_evsum2his
#define __ev_sum2hisa              __builtin_spe2_evsum2hisa
#define __ev_sum2hisaaw            __builtin_spe2_evsum2hisaaw
#define __ev_sum2hs                __builtin_spe2_evsum2hs
#define __ev_sum2hsa               __builtin_spe2_evsum2hsa
#define __ev_sum2hsaaw             __builtin_spe2_evsum2hsaaw
#define __ev_sum2hu                __builtin_spe2_evsum2hu
#define __ev_sum2hua               __builtin_spe2_evsum2hua
#define __ev_sum2huaaw             __builtin_spe2_evsum2huaaw
#define __ev_sum4bs                __builtin_spe2_evsum4bs
#define __ev_sum4bsa               __builtin_spe2_evsum4bsa
#define __ev_sum4bsaaw             __builtin_spe2_evsum4bsaaw
#define __ev_sum4bu                __builtin_spe2_evsum4bu
#define __ev_sum4bua               __builtin_spe2_evsum4bua
#define __ev_sum4buaaw             __builtin_spe2_evsum4buaaw
#define __ev_sumws                 __builtin_spe2_evsumws
#define __ev_sumwsa                __builtin_spe2_evsumwsa
#define __ev_sumwsaa               __builtin_spe2_evsumwsaa
#define __ev_sumwu                 __builtin_spe2_evsumwu
#define __ev_sumwua                __builtin_spe2_evsumwua
#define __ev_sumwuaa               __builtin_spe2_evsumwuaa
#define __ev_swapbhilo             __builtin_spe2_evswapbhilo
#define __ev_swapblohi             __builtin_spe2_evswapblohi
#define __ev_swaphe                __builtin_spe2_evswaphe
#define __ev_swaphhi               __builtin_spe2_evswaphhi
#define __ev_swaphhilo             __builtin_spe2_evswaphhilo
#define __ev_swaphlo               __builtin_spe2_evswaphlo
#define __ev_swaphlohi             __builtin_spe2_evswaphlohi
#define __ev_swapho                __builtin_spe2_evswapho
#define __ev_unpkhibsi             __builtin_spe2_evunpkhibsi
#define __ev_unpkhibui             __builtin_spe2_evunpkhibui
#define __ev_unpkhihf              __builtin_spe2_evunpkhihf
#define __ev_unpkhihsi             __builtin_spe2_evunpkhihsi
#define __ev_unpkhihui             __builtin_spe2_evunpkhihui
#define __ev_unpkhiwgsf            __builtin_spe2_evunpkhiwgsf
#define __ev_unpklobsi             __builtin_spe2_evunpklobsi
#define __ev_unpklobui             __builtin_spe2_evunpklobui
#define __ev_unpklohf              __builtin_spe2_evunpklohf
#define __ev_unpklohsi             __builtin_spe2_evunpklohsi
#define __ev_unpklohui             __builtin_spe2_evunpklohui
#define __ev_unpklowgsf            __builtin_spe2_evunpklowgsf

#define __ev_xtrb                  __builtin_spe2_evxtrb
#define __ev_xtrd                  __builtin_spe2_evxtrd
#define __ev_xtrh                  __builtin_spe2_evxtrh

#define __ev_fsaddsub              __builtin_spe2_evfsaddsub
#define __ev_fsaddsubx             __builtin_spe2_evfsaddsubx
#define __ev_fsaddx                __builtin_spe2_evfsaddx

#define __ev_fscfh                 __builtin_spe2_evfscfh
#define __ev_fscth                 __builtin_spe2_evfscth

#define __ev_fsdiff                __builtin_spe2_evfsdiff
#define __ev_fsdiffsum             __builtin_spe2_evfsdiffsum

#define __ev_fsmax                 __builtin_spe2_evfsmax
#define __ev_fsmin                 __builtin_spe2_evfsmin

#define __ev_fsmule                __builtin_spe2_evfsmule
#define __ev_fsmulo                __builtin_spe2_evfsmulo
#define __ev_fsmulx                __builtin_spe2_evfsmulx

#define __ev_fssqrt                __builtin_spe2_evfssqrt

#define __ev_fssubadd              __builtin_spe2_evfssubadd
#define __ev_fssubaddx             __builtin_spe2_evfssubaddx
#define __ev_fssubx                __builtin_spe2_evfssubx
#define __ev_fssum                 __builtin_spe2_evfssum
#define __ev_fssumdiff             __builtin_spe2_evfssumdiff

#define __ev_select_eqd            __builtin_spe2_evselect_eqd
#define __ev_select_gtds           __builtin_spe2_evselect_gtds
#define __ev_select_gtdu           __builtin_spe2_evselect_gtdu
#define __ev_select_ltds           __builtin_spe2_evselect_ltds
#define __ev_select_ltdu           __builtin_spe2_evselect_ltdu

#define __ev_any_gtds(a, b)	   __builtin_spe2_evcmpgtds (__pred_any, (a), (b))
#define __ev_all_gtds(a, b)	   __builtin_spe2_evcmpgtds (__pred_all, (a), (b))
#define __ev_upper_gtds(a, b)	   __builtin_spe2_evcmpgtds (__pred_upper, (a), (b))
#define __ev_lower_gtds(a, b)	   __builtin_spe2_evcmpgtds (__pred_lower, (a), (b))

#define __ev_any_gtdu(a, b)	   __builtin_spe2_evcmpgtdu (__pred_any, (a), (b))
#define __ev_all_gtdu(a, b)	   __builtin_spe2_evcmpgtdu (__pred_all, (a), (b))
#define __ev_upper_gtdu(a, b)	   __builtin_spe2_evcmpgtdu (__pred_upper, (a), (b))
#define __ev_lower_gtdu(a, b)	   __builtin_spe2_evcmpgtdu (__pred_lower, (a), (b))

#define __ev_any_ltds(a, b)	   __builtin_spe2_evcmpltds (__pred_any, (a), (b))
#define __ev_all_ltds(a, b)	   __builtin_spe2_evcmpltds (__pred_all, (a), (b))
#define __ev_upper_ltds(a, b)	   __builtin_spe2_evcmpltds (__pred_upper, (a), (b))
#define __ev_lower_ltds(a, b)	   __builtin_spe2_evcmpltds (__pred_lower, (a), (b))

#define __ev_any_ltdu(a, b)	   __builtin_spe2_evcmpltdu (__pred_any, (a), (b))
#define __ev_all_ltdu(a, b)	   __builtin_spe2_evcmpltdu (__pred_all, (a), (b))
#define __ev_upper_ltdu(a, b)	   __builtin_spe2_evcmpltdu (__pred_upper, (a), (b))
#define __ev_lower_ltdu(a, b)	   __builtin_spe2_evcmpltdu (__pred_lower, (a), (b))

#define __ev_any_eqd(a, b)	   __builtin_spe2_evcmpeqd (__pred_any, (a), (b))
#define __ev_all_eqd(a, b)	   __builtin_spe2_evcmpeqd (__pred_all, (a), (b))
#define __ev_upper_eqd(a, b)	   __builtin_spe2_evcmpeqd (__pred_upper, (a), (b))
#define __ev_lower_eqd(a, b)	   __builtin_spe2_evcmpeqd (__pred_lower, (a), (b))

#endif /* __SPE2__ */

#endif /* _SPE2_H */
