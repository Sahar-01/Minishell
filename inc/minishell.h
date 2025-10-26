#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../libft/inc/libft.h"

#define WHITE	"\e[38;5;15m"
#define GREEN	"\e[38;5;35;1m"
#define CYAN	"\e[38;5;6;1m"
#define BGBLUE  "\e[48;5;33;1m"
#define RESET	"\e[0m"

// 4KB Buffer size excludes null terminator
# ifndef BUFF_SIZE
#  define BUFF_SIZE 4096
# endif

// Error handler functions
void	handle_getcwd_error(void);
void	handle_fork_error(int *fd);
void	ft_error(const char *msg);

// Prompt builder functions
const char	*print_prompt(void);

// Utility functions
void	free_arr(char **arr);
#endif
