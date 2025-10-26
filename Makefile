NAME = Minishell

SRC_DIR = srcs
LIBFT_DIR = libft
INCLUDE_DIR = inc

LIBFT_A = $(LIBFT_DIR)/libft.a

SRC_FILES = \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/error_handler.c

OBJ_FILES = $(SRC_FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR) -I$(LIBFT_DIR)/inc

.PHONY: all clean fclean re

all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJ_FILES)
	@$(CC) $(OBJ_FILES) $(LIBFT_A) -lreadline -o $(NAME)

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ_FILES)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
