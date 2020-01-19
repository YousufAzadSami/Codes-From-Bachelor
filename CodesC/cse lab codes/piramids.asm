;MD. Yousuf Azad
;11.01.04.096
;
;
;
; piramid of stars

.MODEL SMALL
.STACK 100H 
.CODE

MAIN PROC
	MOV CX,1           
	MOV AH,2
	MOV DL,' '
	INT 21H
	MOV DL,' '
	INT 21H
	MOV DL,'*'


TOP:
	INT 21H
	LOOP TOP 

	MOV AH,2
	MOV DL,0DH
	INT 21H
	MOV DL,0AH
	INT 21H

	MOV CX,3            
	MOV AH,2 
	MOV DL,' '
	INT 21H

	MOV DL,'*'


TOP1:
	INT 21H
	LOOP TOP1

	MOV AH,2
	MOV DL,0DH
	INT 21H
	MOV DL,0AH
	INT 21H

	MOV CX,5            
	MOV AH,2
	MOV DL,'*'

TOP2:
	INT 21H
	LOOP TOP2

	MOV AH,4CH
	INT 21H

	MAIN ENDP
END MAIN