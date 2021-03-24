section .text
    extern ___error
    global _ft_read

_ft_read:
    mov rax, 0x2000003
    syscall
    jc _error
    ret

_error:
    mov rdi, rax
    call ___error
    mov [rax], rdi
    mov rax, -1
    ret
    