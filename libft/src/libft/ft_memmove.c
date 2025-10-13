/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:01:32 by scheragh          #+#    #+#             */
/*   Updated: 2024/12/10 17:30:09 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*sc;
	char	*dt;
	size_t	i;

	i = 0;
	sc = (char *)src;
	dt = (char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dt > sc)
		while (n-- > 0)
			dt[n] = sc[n];
	else
	{
		while (i < n)
		{
			dt[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
