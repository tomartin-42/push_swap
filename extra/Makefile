NAME = checker

CFLAGS := -Wall -Wextra -Werror

CC := gcc

SRC = checks_bonus.c \
		ft_atoi_bonus.c \
		ft_split_bonus.c \
		get_next_line_bonus.c \
		get_next_line_utils_bonus.c \
		getarg_bonus.c \
		getarg2_bonus.c \
		main.c \
		moves1_bonus.c \
		moves2_bonus.c \
		moves3_bonus.c \
		stackutils_bonus.c \
		utils_bonus.c \
		utils2_bonus.c \
		writes_bonus.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) -c -o $@ $< 

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean clean all

.PHONY: all clean fclean re