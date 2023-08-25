section .data

	hello db "Hello, Holberton",0
	newline db 10, 0 ; ASCII code for newline

section .text
	global main
	extern printf

main:
	sub rsp, 8
	mov rdi, hello
	call printf
	mov rdi, newline
	call printf
	add rsp, 8
	ret
