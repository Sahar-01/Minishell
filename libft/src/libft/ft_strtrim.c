/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:43:36 by scheragh          #+#    #+#             */
/*   Updated: 2024/12/15 15:41:14 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	j;
	size_t	size;

	j = 0;
	i = 0;
	size = ft_strlen(s1);
	while (s1[j] && isset(s1[j], set))
		j++;
	while (size > j && isset(s1[size - 1], set))
		size--;
	trimmed = (char *)malloc(sizeof(char) * (size - j + 1));
	while (j < size)
		trimmed[i++] = s1[j++];
	if (!trimmed)
		return (NULL);
	trimmed[i] = 0;
	return (trimmed);
}
