NAME = libasm.a
RED = \033[0;31m
GREEN = \033[0;32m
SRCS =	ft_read.s \
		ft_write.s \
		ft_strcpy.s \
		ft_strlen.s \
		ft_strdup.s \
		ft_strcmp.s

OBJC = $(SRCS:.s=.o)
HEADER = libasm.h
NASM = nasm -f macho64


%.o : %.s
	@$(NASM) $<

$(NAME):	$(OBJC)
			@ar rc $(NAME) $?
			@echo "$(GREEN)------>LIBASM.A CREATED<-----"

all:		$(NAME)

clean:		
			@rm -f $(OBJC)
			@echo "$(RED)------>DELETE ALL .o FILE<-----"

fclean:		clean
			@rm -f $(NAME)
			@echo "$(RED)------>LIBASM.A DELETE<-----"

re:			fclean all

test:		main.o
			@gcc -Wall -Wextra -Werror -c main.c;
			@gcc main.c libasm.a
			@echo "$(GREEN)------>"./TEST" CREATED<-----"

.PHONY: all re fclean clean test