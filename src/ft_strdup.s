section .text
	global ft_strdup
	extern malloc, __errno_location
	extern ft_strlen
ft_strdup:
	push rdi			; Save string pointer
	call ft_strlen		; RAX = string_len 
	inc rax				; ++RAX pour \0
	push rax			; SAVE string_len pour movs
	mov rdi,rax			; RDI = string_len pour malloc
	call malloc			; RAX = return value
	test rax,rax		; RAX & RAX
	jz malloc_failed
	pop rcx				; RCX = string_len + 1
	pop rsi				; RSI = src pour movs
	mov rdi,rax			; RDI = dest pour movs
	rep movsb			; Copier scr vers dest
	ret
malloc_failed:
    call __errno_location
    mov dword [rax], 12  ; `ENOMEM`
    xor rax, rax         ; Retourne NULL
    ret
