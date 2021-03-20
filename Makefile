NAME = libasm.a
SRCS =	ft_read.s \
		ft_write.s \
		ft_strcpy.s \
		ft_strlen.s \

OBJC = $(SRCS:.s=.o)
NASM = nasm -f macho64


$(NAME):	$(NAME) $(OBJC)
			ar rc $(NAME) $(OBJC)

$.o:		$.s
			$(NASM) $<

all:		$(NAME)

clean:		
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
re:			fclean all

main:		main.o
			gcc -Wall -Wextra -Werror -c main.c;
			gcc main.c libasm.a

.PHONY: all re fclean clean $(NAME)