SOURCES = ft_atoi.c
SOURCES += ft_bzero.c
SOURCES += ft_isalnum.c
SOURCES += ft_isalpha.c
SOURCES += ft_isascii.c
SOURCES += ft_isdigit.c
SOURCES += ft_isprint.c
SOURCES += ft_memccpy.c
SOURCES += ft_memchr.c
SOURCES += ft_memcmp.c
SOURCES += ft_memcpy.c
SOURCES += ft_memmove.c
SOURCES += ft_memset.c
SOURCES += ft_strcat.c
SOURCES += ft_strchr.c
SOURCES += ft_strcmp.c
SOURCES += ft_strcpy.c
SOURCES += ft_strdup.c
SOURCES += ft_strlcat.c
SOURCES += ft_strlen.c
SOURCES += ft_strncat.c
SOURCES += ft_strncmp.c
SOURCES += ft_strncpy.c
SOURCES += ft_strnstr.c
SOURCES += ft_strrchr.c
SOURCES += ft_strstr.c
SOURCES += ft_tolower.c
SOURCES += ft_toupper.c
SOURCES += ft_itoa.c
SOURCES += ft_memdel.c
SOURCES += ft_memalloc.c
SOURCES += ft_putchar_fd.c
SOURCES += ft_putchar.c
SOURCES += ft_putendl_fd.c
SOURCES += ft_putendl.c
SOURCES += ft_putnbr_fd.c
SOURCES += ft_putnbr.c
SOURCES += ft_putstr_fd.c
SOURCES += ft_putstr.c
SOURCES += ft_strclr.c
SOURCES += ft_strdel.c
SOURCES += ft_strequ.c
SOURCES += ft_striter.c
SOURCES += ft_striteri.c
SOURCES += ft_strjoin.c
SOURCES += ft_strmap.c
SOURCES += ft_strmapi.c
SOURCES += ft_strnequ.c
SOURCES += ft_strnew.c
SOURCES += ft_strsplit.c
SOURCES += ft_strsub.c
SOURCES += ft_strtrim.c
SOURCES += ft_lstnew.c
SOURCES += ft_lstdelone.c
SOURCES += ft_lstdel.c
SOURCES += ft_lstadd.c
SOURCES += ft_lstiter.c
SOURCES += ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SOURCES) -I includes/
	@ar rc $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
