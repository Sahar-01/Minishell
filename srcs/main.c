#include "../inc/minishell.h"

const char	*print_prompt(void)
{
	const char	*prompt;

	prompt = CYAN">$"RESET;
	return prompt;
}
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
	//add_history(buf); // optional: stores command in history
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
		execute_command(commands); // your own logic
		if (ret == -1)
			break;
	}
	return (0);
}
