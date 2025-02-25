section .text
    global ft_strlen	; Rend la fonction accessible depuis l'extérieur
ft_strlen:
	mov rcx,-1			; RCX = MAX_STRING_SIZE
	mov rsi,rdi			; RSI string pointer save = RDI arg1
	xor rax,rax			; al = 0
	repnz scasb
	lea rax, [rdi - 1]	; &rax = &(rdi - 1) 
	sub rax,rsi			; calcule de l'output rax = rax - rsi
    ret					; Retour à l'appelant
