/**
 * Entry point - assembly code
 *
 * Return: Hello, Holberton, followed by a new line.
 */
section .data
hello db "Hello, Holberton", 0
fmt db "%s\n", 0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

; call printf function
mov rdi, fmt
mov rsi, hello
xor eax, eax
call printf

; return
mov rsp, rbp
pop rbp
xor eax, eax
ret

