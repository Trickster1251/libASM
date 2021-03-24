segment .text
    global _ft_strlen

_ft_strlen:
    xor rax, rax
    jmp .increment

.increment:
    cmp BYTE [rdi + rax], 0
    je .end
    inc rax
    jmp .increment

.end:
    ret