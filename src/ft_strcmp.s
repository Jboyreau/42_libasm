section .text
	global ft_strcmp	; Rend la fonction accessible depuis l'extérieur
ft_strcmp:
	xor r8, r8			; i = 0
loop_cmp:
	mov cl,byte[rdi+r8]	; CX = [RDI]
	mov dl,byte[rsi+r8]	; DX = [RSI]
	inc r8				; ++R8
	mov al,cl			; AX = CX
	mul dl	 			; AX *= DX
	test ax,ax			; AX & AX
	je loop_cmp_end		; Quitte la boucle si al ou bl est null
	cmp cl,dl			; Compare *str1 et *str2
	je loop_cmp
loop_cmp_end:
	sub cl,dl			; *str1 - *str2
	movsx rax,cl		; Set return value
	ret					; Retour a l'appelant
