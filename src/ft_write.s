section .text
	global ft_write
	extern __errno_location
ft_write:
	mov rax,1		; Write
	syscall
	cmp rax,0
	jl set_errno	; Si rax < 0
	ret
set_errno:
	neg rax               ; Convertit -errno en errno positif
	push rax              ; Sauvegarde errno sur la pile
	call __errno_location ; RAX = adresse de errno
	pop rdx               ; RDX = errno
	mov [rax], rdx        ; Stocke errno
	mov rax, -1           ; Retourne -1 en cas d'erreur
	ret
