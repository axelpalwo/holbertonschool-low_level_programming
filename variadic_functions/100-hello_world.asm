section .data
	message: db "Hello, World", 0xA
	message_length equ $ - message

section .text
	global main

main:
	mov eax, 1			; use the write syscall
	mov edi, 1			; use stdout as the fd
	mov rsi, message		; use the message as buffer
	mov edx, message_length		; and supply the length
	syscall				; invoke the syscall

	; exit

	mov eax, 60			; use the exit syscall
	xor edi, edi			; return 0
	syscall				; invoke the syscall

