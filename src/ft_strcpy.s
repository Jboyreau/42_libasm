section .text
	global ft_strcpy	; Rend la fonction accessible depuis l'extérieur
ft_strcpy:
	mov rcx,rdi			; Save return value RCX = RDI
loop_cpy:
	lodsb				; AL = [RSI]; ++RSI
	test al,al			; Activation du zero flag si (AL == 0)
	stosb				; [RDI] = AL; ++RDI
	jnz loop_cpy
	mov rax,rcx			; Set return value RAX = RCX
	ret					; Retour a l'appelant
