/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:05:56 by scheragh          #+#    #+#             */
/*   Updated: 2024/12/23 09:34:23 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	*allocate_substring(const char *start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (i < len)
	{
		substring[i] = start[i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}

static void	free_split(char **splitarr, int index)
{
	while (--index >= 0)
		free(splitarr[index]);
	free(splitarr);
}

static int	process_word(char **splitarr, const char **s, char c, int index)
{
	const char	*start;
	size_t		len;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	splitarr[index] = allocate_substring(start, len);
	if (!splitarr[index])
	{
		free_split(splitarr, index);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**splitarr;
	int		count;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	count = countwords(s, c);
	splitarr = malloc((count + 1) * sizeof(char *));
	if (!splitarr)
		return (NULL);
	while (i < count)
	{
		if (!process_word(splitarr, &s, c, i))
			return (NULL);
		i++;
	}
	splitarr[i] = (NULL);
	return (splitarr);
}
