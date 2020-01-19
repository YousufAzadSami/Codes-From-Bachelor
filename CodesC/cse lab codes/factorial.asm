;MD. Yousuf Azad
;11.01.04.096
;
;
;
; n factorial 

.MODEL SMALL
.STACK 100H
.DATA
    CR DB 0DH
    LF DB 0AH
    M DB 'N= $'
.CODE
    MAIN PROC
        MOV AX,@DATA
        MOV DS,AX
        LEA DX,M
        MOV AH,9
        INT 21H
        
        MOV AH,1
        INT 21H
                        
        SUB AL,30H
        MOV BL,AL
        
        CMP AL,0
        JNE A
        MOV AX,1 
        JMP DISPLAY
        
 A:     MOV AX,1
        MOV CX,BX
        
 B:     MUL BL
        DEC BL
        LOOP B 
        
        MOV BL,AL 
       
        MOV DL,CR
        MOV AH,2
        INT 21H
        MOV DL,LF
        MOV AH,2
        INT 21H
        MOV AL,BL
        
DISPLAY:  
		ADD AL,30H
        
        MOV DL,AL
        MOV AH,2
        INT 21H      
        
        MOV AH,4CH
		INT 21H
                
        MAIN ENDP
END MAIN