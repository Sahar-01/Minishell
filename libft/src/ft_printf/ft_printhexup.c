/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:14:09 by scheragh          #+#    #+#             */
/*   Updated: 2025/03/23 16:14:54 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>

int	ft_printhexup(unsigned int n)
{
	char	p;
	int		count;
	char	*charhex;

	count = 0;
	charhex = "0123456789ABCDEF";
	if (n > 15)
		count += ft_printhexlow(n / 16);
	p = charhex[n % 16];
	write(1, &p, 1);
	count++;
	return (count);
}
