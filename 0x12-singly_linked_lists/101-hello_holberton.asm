    global main
    extern printf

    section .data
        hello: db "Hello, Holberton", 10, 0

    section .text
        main:
            mov rbp, rsp
            lea rdi, [rel hello]
            mov rax, 0
            call printf
            mov rsp, rbp
            ret

