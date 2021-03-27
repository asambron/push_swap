NAME = ../push_swap

FLAGS = -Wall -Wextra -Werror

DIR_SRC = ./srcs/
DIR_INC = ./includes/
DIR_OBJ = ./objs/
DIR_LIBFT = ../libft/

INC = ./includes/push_swap.h

SRC_FILES = check.c \
			create.c \
			main.c \
			print.c \
			push.c \
			rotate.c \
			algo_1.c \
			algo_2.c \
			algo_3.c \
			swap.c \
			utils.c\
			opti_mvt.c

SRC = $(addprefix $(DIR_SRC), $(SRC_FILES))
OBJ = $(addprefix $(DIR_OBJ), $(SRC_FILES:.c=.o))
LIBFT = $(addprefix $(DIR_LIBFT), libft.a)
LIB = -L $(DIR_LIBFT) -lft

all: $(NAME)

$(NAME): $(DIR_OBJ) $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIB) -o $(NAME)

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(LIBFT):
	@make -C $(DIR_LIBFT)

$(DIR_OBJ)%.o:$(DIR_SRC)%.c $(INC)
	@gcc $(FLAGS) -I $(DIR_LIBFT) -I $(DIR_INC) -o $@ -c $<

clean:
	@rm -Rf $(DIR_OBJ)
	@make -C $(DIR_LIBFT) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(DIR_LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
