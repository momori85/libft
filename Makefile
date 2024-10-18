AR = ar rcs
CC = cc
SRC = ft_strjoin.c ft_memmove.c ft_isalpha.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_strlen.c ft_isprint.c ft_memset.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_toupper.c ft_tolower.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ_BONUS = $(BONUS:.c=.o) $(SRC:.c=.o)
NAME = libft.a
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(FLAGS)
	$(AR) $(NAME) -o $(OBJ)

clean:
	rm -f $(OBJ_BONUS)
fclean:
	rm -f $(OBJ_BONUS) $(NAME)
re: fclean all

bonus: $(OBJ_BONUS)

$(OBJ_BONUS):
	$(CC) -c $(BONUS) $(SRC) $(FLAGS)
	$(AR) $(NAME) -o $(OBJ_BONUS)

bite
