/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printinteger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:29:35 by scheragh          #+#    #+#             */
/*   Updated: 2025/03/23 16:37:57 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_printinteger(int n)
{
	char	p;
	int		count;

	count = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		else
		{
			write(1, "-", 1);
			n = -n;
			count++;
		}
	}
	if (n > 9)
		count = ft_printinteger(n / 10);
	p = (n % 10) + '0';
	write(1, &p, 1);
	return (count);
}
