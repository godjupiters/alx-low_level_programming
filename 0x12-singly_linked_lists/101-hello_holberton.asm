    global main
    extern printf

    section .data
        hello: db "Hello, Holberton", 10, 0 ; define a string with a newline

    section .text
        main:
            mov rbp, rsp ; set up the stack frame
            lea rdi, [rel hello] ; load the address of the string
            mov rax, 0 ; set the number of floating point arguments to zero
            call printf ; invoke the printf function
            mov rsp, rbp ; restore the stack pointer
            ret ; return from main
