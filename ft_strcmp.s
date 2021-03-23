segment .text
        global _ft_strcmp

_iter:
    inc rax
    jmp _cmp

_cmp:
    mov bl , BYTE [rdi + rax]
    mov cl , BYTE [rsi + rax]
    cmp bl, 0
    je _exit
    cmp cl, 0
    je _exit
    cmp bl, cl
    je _iter
    jmp _exit
_ret_zero:
    mov rax, 0
    ret
_ret_great:
    mov rax, 1
    ret
_ret_less:
    mov rax, -1
    ret
_ft_strcmp:
    xor rax, rax
    jmp _cmp
_exit:
    cmp bl, cl
    jg _ret_great
    jl _ret_less
    je _ret_zero
    ret