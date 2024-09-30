
SRCS = ft_atoi.c     ft_isdigit.c    ft_memalloc.c  ft_memdel.c      ft_putendl.c     ft_putstr_fd.c  ft_strcpy.c    ft_strjoin.c  ft_strncat.c  ft_strnstr.c   ft_strtrim.c \
       ft_bzero.c    ft_isprint.c    ft_memccpy.c   ft_memmove.c     ft_putendl_fd.c  ft_strcat.c     ft_strdel.c    ft_strlcat.c  ft_strncmp.c  ft_strrchr.c   ft_substr.c \
       ft_isalnum.c  ft_itoa.c       ft_memchr.c    ft_memset.c      ft_putnbr.c      ft_strchr.c     ft_strequ.c    ft_strlen.c   ft_strncpy.c  ft_strsplit.c  ft_tolower.c \
       ft_isalpha.c  ft_lstdelone.c  ft_memcmp.c    ft_putchar.c     ft_putnbr_fd.c   ft_strclr.c     ft_striter.c   ft_strmap.c   ft_strnequ.c  ft_strstr.c    ft_toupper.c \
       ft_isascii.c  ft_lstnew.c     ft_memcpy.c    ft_putchar_fd.c  ft_putstr.c      ft_strcmp.c     ft_striteri.c  ft_strmapi.c  ft_strnew.c   ft_strsub.c

SRCSB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
        ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c


OBJECT = $(SRCS:.c=.o)
OBJECTB = $(SRCSB:.c=.o)


CFLAGS = -Wall -Wextra -Werror


NAME = libft.a


all: $(NAME)

$(NAME): $(OBJECT)
	@ar rcs $(NAME) $(OBJECT)


bonus: $(OBJECTB)
	@ar rcs $(NAME) $(OBJECTB)


clean:
	@rm -f $(OBJECT) $(OBJECTB)


fclean: clean
	@rm -f $(NAME)


re: fclean all

.PHONY: all bonus clean fclean re
