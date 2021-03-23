segment .text
        extern _ft_strlen
        global _ft_bzero


_exit:
    mov rax, rsi
    ret
_copy:
    cmp rcx, rsi
    je _exit
    mov bl, '0'
    mov BYTE [rdi + rcx], bl
    inc rcx
    jmp _copy

_to_zero:
    call _ft_strlen
    cmp rax, rsi
    jl _set_len
    jmp _copy

_set_len:
    mov rsi, rax

_ft_bzero:
        xor rcx, rcx
        cmp rdi, 0
        jne _to_zero