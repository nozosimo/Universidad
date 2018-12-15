
;%%%%%%%%%%%%%%%%%%%%%%%
;assemble and link with 
;nasm -f win32 -o P1.o P1.asm -l P1.lst
;gcc -o P1.exe P1.o
;%%%%%%%%%%%%%%%%%%%%%%%
;---------------------------------------

;file: P1.asm

extern _printf, _scanf		

segment .data
;aqui se declaran variables inicializadas
		
segment .bss
;aqui van las variables declaradas pero sin inicializar

segment .text 
global _main 					
_main:
;---------------------------------------
mov bl, 0x80	
;Movimiento de datos con extensi�n
movsx eax, bl	;# extiende el valor de 8 bits en bl a 32 bits usando el bit de signo
movzx eax, bl	;# extiende el valor de 8 bits en bl a 32 bits rellenando con ceros

ret





