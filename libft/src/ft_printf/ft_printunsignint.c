/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:28:55 by scheragh          #+#    #+#             */
/*   Updated: 2025/03/23 16:35:44 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_printunsignint(unsigned int nb)
{
	char	p;
	int		count;

	count = 0;
	if (nb > 9)
		count += ft_printunsignint(nb / 10);
	p = (nb % 10) + '0';
	write(1, &p, 1);
	count++;
	return (count);
}
