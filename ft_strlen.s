segment .text
    global _ft_strlen

_ft_strlen:
    xor rax, rax
    jmp _increment

_increment:
    cmp BYTE [rdi + rax], 0
    je _end
    inc rax
    jmp _increment

_end:
    ret