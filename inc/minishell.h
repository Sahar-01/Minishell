#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>
# include <stdio.h>
# include <readline/readline.h>
# include "../libft/inc/libft.h"

#define BLUE	"\e[1;34;1m"
#define MAGEN	"\e[1;35;1m"
#define CYAN	"\e[1;36;1m"
#define RESET	"\e[0m"

void	handle_getcwd_error(const char *msg);
void	handle_fork_error(char *msg, int *fd);
void	ft_error(const char *msg);
#endif
