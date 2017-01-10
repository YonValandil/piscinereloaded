SRC	=			srcs/ft_putchar.c					\
				srcs/ft_putstr.c					\
				srcs/ft_strcmp.c					\
				srcs/ft_strlen.c					\
				srcs/ft_swap.c						


CC 		=	gcc
NAME 	=	libft.a
CFLAGS 	= 	-Wall -Wextra -Werror -I.
OBJS 	= 	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:		fclean all

.PHONY: all, clean, fclean, re
