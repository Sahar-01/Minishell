# **************************************************************************** #
NAME = libft.a

SRC_DIR = src
INC_DIR = inc

LIBFT_DIR = $(SRC_DIR)/libft
PRINTF_DIR = $(SRC_DIR)/ft_printf
GNL_DIR = $(SRC_DIR)/get_next_line

# Source files
SRCS = \
	$(LIBFT_DIR)/ft_atoi.c \
	$(LIBFT_DIR)/ft_bzero.c \
	$(LIBFT_DIR)/ft_calloc.c \
	$(LIBFT_DIR)/ft_isalnum.c \
	$(LIBFT_DIR)/ft_isalpha.c \
	$(LIBFT_DIR)/ft_isascii.c \
	$(LIBFT_DIR)/ft_isdigit.c \
	$(LIBFT_DIR)/ft_isprint.c \
	$(LIBFT_DIR)/ft_itoa.c \
	$(LIBFT_DIR)/ft_lstadd_back.c \
	$(LIBFT_DIR)/ft_lstadd_front.c \
	$(LIBFT_DIR)/ft_lstclear.c \
	$(LIBFT_DIR)/ft_lstdelone.c \
	$(LIBFT_DIR)/ft_lstiter.c \
	$(LIBFT_DIR)/ft_lstlast.c \
	$(LIBFT_DIR)/ft_lstnew.c \
	$(LIBFT_DIR)/ft_lstsize.c \
	$(LIBFT_DIR)/ft_memchr.c \
	$(LIBFT_DIR)/ft_memcmp.c \
	$(LIBFT_DIR)/ft_memcpy.c \
	$(LIBFT_DIR)/ft_memmove.c \
	$(LIBFT_DIR)/ft_memset.c \
	$(LIBFT_DIR)/ft_putchar_fd.c \
	$(LIBFT_DIR)/ft_putendl_fd.c \
	$(LIBFT_DIR)/ft_putnbr_fd.c \
	$(LIBFT_DIR)/ft_putstr_fd.c \
	$(LIBFT_DIR)/ft_split.c \
	$(LIBFT_DIR)/ft_strampi.c \
	$(LIBFT_DIR)/ft_strchr.c \
	$(LIBFT_DIR)/ft_strdup.c \
	$(LIBFT_DIR)/ft_striteri.c \
	$(LIBFT_DIR)/ft_strjoin.c \
	$(LIBFT_DIR)/ft_strlcat.c \
	$(LIBFT_DIR)/ft_strlcpy.c \
	$(LIBFT_DIR)/ft_strlen.c \
	$(LIBFT_DIR)/ft_strncmp.c \
	$(LIBFT_DIR)/ft_strnstr.c \
	$(LIBFT_DIR)/ft_strrchr.c \
	$(LIBFT_DIR)/ft_strtrim.c \
	$(LIBFT_DIR)/ft_substr.c \
	$(LIBFT_DIR)/ft_tolower.c \
	$(LIBFT_DIR)/ft_toupper.c \
	$(PRINTF_DIR)/ft_printchar.c \
	$(PRINTF_DIR)/ft_printf.c \
	$(PRINTF_DIR)/ft_printhexlow.c \
	$(PRINTF_DIR)/ft_printhexup.c \
	$(PRINTF_DIR)/ft_printinteger.c \
	$(PRINTF_DIR)/ft_printptr.c \
	$(PRINTF_DIR)/ft_printstr.c \
	$(PRINTF_DIR)/ft_printunsignint.c \
	$(GNL_DIR)/get_next_line_bonus.c \
	$(GNL_DIR)/get_next_line_utils.c \
	$(GNL_DIR)/get_next_line_utils_bonus.c

OBJS = $(SRCS:.c=.o)

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinc
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
