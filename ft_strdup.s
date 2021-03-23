section .text
    global _ft_strdup
    extern ___error
    extern _malloc
    extern _ft_strlen
    extern _ft_strcpy

_ft_strdup:
    xor rax, rax
    cmp rdi, 0
    je _ret
    push rdi
    call _ft_strlen
    inc rax
    mov rdi, rax
    call _malloc
    cmp rax, 0
    je  _error
    pop rsi
    mov rdi, rax
    call _ft_strcpy
    ret

_ret:
    ret

_error:
    mov rdi, rax
    call ___error
    mov [rax], rdi
    mov rax, -1
    ret