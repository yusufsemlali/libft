SRCS = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_calloc.c ft_isdigit.c ft_memcmp.c  ft_strtrim.c  ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strlcpy.c  ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_strlen.c ft_strrchr.c ft_toupper.c
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)
all : $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
