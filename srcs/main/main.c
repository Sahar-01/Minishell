#include "../inc/minishell.h"

void	execute_command(char **commands)
{
	(void)commands;
}

char	*read_input(void)
{
	//char	cwd[BUFSIZ];
	char	*input;

	//getcwd(cwd, sizeof(cwd));
	input = readline(print_prompt());
	if (!input)
	{
		printf("exit\n");
		exit(0);  // graceful exit on Ctrl+D
	}
	if (input[0] != '\0')
		add_history(input);
	return (input);
	free(input);
}

int	main(int argc, char **argv, char **envv)
{
	char	*input;
	char	**commands;
	int		ret;

	ret = 0;
	(void)argc;
	(void)argv;
	(void)envv;

	while (1)
	{
		input = read_input();
		commands = ft_split(input, ';'); // assume ft_split works
		free(input);
		execute_command(commands); // your own logic
		free_arr(commands);
		if (ret == -1)
			break;
	}
	// Helps with readline memory leaks
	rl_clear_history();
	return (0);
}
