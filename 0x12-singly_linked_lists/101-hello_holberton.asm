    global main
    extern printf

    section .data
        msg: db "Hello, Holberton", 10

    section .text
        main:
            push rbp
            mov rdi, msg
            xor rax, rax
            call printf
            pop rbp
            ret

