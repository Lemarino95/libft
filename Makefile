CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_strlen.c ft_bzero.c ft_strlcat.c ft_isalpha.c ft_isdigit.c\
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c\
		ft_strncmp.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strnstr.c\
		ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS = ${SRC:.c=.o}

all: $(NAME)

$(NAME):$(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

%.o: %.c
		${CC} -c ${CFLAGS} -I. $< -o $@

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all