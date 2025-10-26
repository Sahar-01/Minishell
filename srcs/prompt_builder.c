/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:45:46 by scheragh          #+#    #+#             */
/*   Updated: 2025/10/26 17:01:00 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/minishell.h"

static int	ft_strcpy(char *dst, const char *src, int i)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (i);
}

const char	*get_username(void)
{
	const char	*user;

	user = getenv("USER");
	if (!user)
		user = "unknown";
	return (user);
}

const char	*get_cwd(void)
{
	static char	buff[BUFF_SIZE];

	if (!getcwd(buff, sizeof(buff)))
		handle_getcwd_error();
	return (buff);
}

const char	*print_prompt(void)
{
	static char	prompt[BUFF_SIZE * 2];
	const char	*username;
	const char	*cwd;
	int			i;

	i = 0;
	username = get_username();
	cwd = get_cwd();
	i = ft_strcpy(prompt, CYAN, i);
	i = ft_strcpy(prompt, username, i);
	i = ft_strcpy(prompt, "@42London ", i);
	i = ft_strcpy(prompt, BLUE, i);
	i = ft_strcpy(prompt, cwd, i);
	i = ft_strcpy(prompt, RESET, i);
	i = ft_strcpy(prompt, " % ", i);
	prompt[i] = '\0';
	return (prompt);
}
