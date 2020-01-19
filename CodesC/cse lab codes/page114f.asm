;MD. Yousuf Azad
;11.01.04.096
;
;
;
; 1F of page:114

.MODEL SMALL
.STACK 100H	
.CODE
	MAIN PROC    
	    CMP AX,BX       
	    JNL A
	    MOV AX,0
        JMP END_IF
    A: 
		CMP BX,CX       
        JNL B
        MOV BX,0
        JMP END_IF
    B: 
		MOV CX,0
        JMP END_IF

	END_IF:	
		MOV AH,4CH
		INT 21H
	MAIN ENDP
END MAIN
                            