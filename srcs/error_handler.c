#include "minishell.h"

void	ft_error(const char *msg)
{
	if (msg)
		perror(msg);
	exit(EXIT_FAILURE);
}

void	handle_fork_error(int *fd)
{
	char	*msg;

	msg = "Wrong blah blah";
	ft_error(msg);
	close(fd[0]);
	close(fd[1]);
}

void	handle_getcwd_error(void)
{
	char	*msg;

	msg = "blaH";
	ft_error(msg);
}
