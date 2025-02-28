section .text
	global ft_read
	extern __errno_location
ft_read:
	mov rax,0		; Read
	syscall
	cmp rax,0		; Si RAX < 0
	jl set_errno
	ret
set_errno:
	neg rax               ; Convertit -errno en errno positif
	push rax              ; Sauvegarde errno sur la pile
	call __errno_location ; RAX = adresse de errno
	pop rdx               ; RDX = errno
	mov [rax], rdx        ; Stocke errno
	mov rax, -1           ; Retourne -1 en cas d'erreur
	ret
