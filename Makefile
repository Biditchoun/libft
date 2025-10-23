SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	  ft_strncmp.c ft_memchr.c


OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra

COMPILER = cc

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): %.o:%.c libft.h
	$(COMPILER) $(FLAGS) -c $< -o $@ -I includes

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
