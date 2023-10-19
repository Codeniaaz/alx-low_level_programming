section .data
	hello db "Hello, Holberton",10  ; The string to print, followed by a newline character (10)
	format db "%s",0  ; Format string for printf

section .text
	global main
	extern printf

main:
	; Call printf with the format string and the address of the 'hello' string
	push rdi                  ; Preserve rdi register
	push rsi                  ; Preserve rsi register
	mov rdi, format
	mov rsi, hello
	call printf
	pop rsi                   ; Restore rsi register
	pop rdi                   ; Restore rdi register
	ret                       ; Return
