section .text
    extern ___error
    global _ft_strcpy

_copy:
    mov bl , BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], bl
    cmp bl, 0
    je _exit
    inc rcx
    jmp _copy

_ft_strcpy:
    xor rax, rax
    mov rcx, 0
    jmp _copy

_exit:
    mov rax, rdi
    ret