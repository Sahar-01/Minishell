/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:53:35 by scheragh          #+#    #+#             */
/*   Updated: 2024/12/23 09:29:11 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_digits(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digits;
	long int	number;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = n;
	digits = get_digits(n);
	if (n < 0)
	{
		number *= -1;
		digits++;
	}
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	*(str + digits) = '\0';
	while (digits--)
	{
		*(str + digits) = (number % 10) + '0';
		number /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
