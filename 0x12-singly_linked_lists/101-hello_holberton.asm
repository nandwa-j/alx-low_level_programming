          SECTION .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0

         SECTION .text
    global main

main:
    ; Call printf
    mov rdi, format
    mov rsi, hello
    mov rax, 0 ; printf syscall number
    call printf

    ; Exit the program
    mov rax, 60        ; syscall: exit
    xor rdi, rdi       ; status: 0
    syscall
