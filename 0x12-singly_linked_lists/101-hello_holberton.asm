/**
 * Entry point - assembly code
 *
 * Return: Hello, Holberton, followed by a new line.
 */
section .data
hello db "Hello, Holberton", 0
fmt db "%s\n", 0

section .text
global _start

_start:
; set up stack frame
xor rbp, rbp

; call printf
mov rdi, fmt
mov rsi, hello
xor rax, rax
call printf

; exit program
xor rdi, rdi
mov rax, 60
syscall

