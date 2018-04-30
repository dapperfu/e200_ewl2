# 1 "src/pa/setjmp.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "src/pa/setjmp.S"
# 47 "src/pa/setjmp.S"
 .global __setjmp
 .global longjmp

 .text
__setjmp:
 se_mflr 5
 se_stw 5,0(3)
 mfcr 5
 se_stw 5,4(3)
# 80 "src/pa/setjmp.S"
 se_stw 1,8(3)
 se_stw 2,12(3)
 e_stmw 13,16(3)


 se_li 3,0
 se_blr


longjmp:
# 113 "src/pa/setjmp.S"
 e_lmw 13,16(3)
 se_lwz 2,12(3)
 se_lwz 1,8(3)

 se_lwz 5,4(3)
 mtcrf 255,5
 se_lwz 5,0(3)
 se_mtlr 5

 se_mr 3,4
 se_cmpi 3,0
 se_bne lab_end
 se_li 3,1
lab_end:
 se_blr

 .end
