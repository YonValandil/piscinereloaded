#DIRECTIVE PARTICULIERE
.PHONY: all, clean, fclean, re

#ENLEVE LES DIRECTIVES IMPLICITES
.SUFFIXES:

CC =			gcc
EXEC =			ft_display_file
LIB =			libft.a
OBJS_DIR =		$(SRCS_DIR)
SRCS_DIR =		./
HEADER_DIR =	./
CFLAGS =		-Wall -Wextra -Werror
ARFLAGS =		rcs
C_FILES =		ft_display_file

# substitution -> $(VAR:PATTERN=REPLACEMENT) | % = VALUE (1 by 1)
SRCS =	$(C_FILES:%=$(SRCS_DIR)%.c)
OBJS =	$(C_FILES:%=$(OBJS_DIR)%.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(SRCS) -I$(HEADER_DIR) -o $@ $(CFLAGS)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	$(CC) -c $< -I$(HEADER_DIR) -o $@ $(CFLAGS)

clean:
	rm -rf $(OBJS_DIR)*.o

fclean:		clean
	rm -rf $(EXEC) $(LIB)

re:		fclean all
