#include "minishell.h"

void	ft_error(const char *msg)
{
	if (msg)
		perror(msg);
	exit(EXIT_FAILURE);
}

void	handle_fork_error(char *msg, int *fd)
{
	ft_error(msg);
	close(fd[0]);
	close(fd[1]);
}

void	handle_getcwd_error(const char *msg)
{
	ft_error(msg);
}
