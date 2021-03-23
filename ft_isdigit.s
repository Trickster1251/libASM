segment .text
        global _ft_isdigit
            
_ft_isdigit:
        xor rax, rax
        cmp rdi, '0'
        jl _return_false
        cmp rdi, '9'
        jg _return_false
        jmp _return_true

_return_true:
        mov rax, 1
        ret

_return_false:
        ret