NAME = push_swap

CFLAGS := -Wall -Wextra -Werror

CC := gcc

SRC = checks.c \
		freedom.c \
		ft_atoi.c \
		ft_split.c \
		getarg.c \
		getarg2.c \
		logic.c \
		logic2.c \
		logic_finish.c \
		logic_finish2.c \
		logic_utils.c \
		logic_utils2.c \
		magic_logic.c \
		main.c \
		midelacction.c \
		moves1.c \
		moves2.c \
		moves3.c \
		special_case.c \
		stackutils.c \
		utils.c \
		writes.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) -c -o $@ $< 

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	cd extra && make clean

fclean: clean
	rm -f $(NAME)
	cd extra && make fclean

re: fclean clean all

bonus:
	cd extra && make

.PHONY: all clean fclean re
