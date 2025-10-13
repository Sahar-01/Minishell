/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:25:23 by scheragh          #+#    #+#             */
/*   Updated: 2024/12/11 18:35:13 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		src_len;
	char	*result;
	char	*res;

	src_len = ft_strlen(src);
	result = (char *)malloc(sizeof(*result) * (src_len + 1));
	if (result == NULL)
		return (NULL);
	res = result;
	while (*src)
	{
		*res = *src;
		res++;
		src++;
	}
	*res = '\0';
	return (result);
}
