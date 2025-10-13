/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:31:40 by scheragh          #+#    #+#             */
/*   Updated: 2024/12/23 09:45:57 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	p;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		else
		{
			n = -n;
			write(fd, "-", 1);
			ft_putnbr_fd(n, fd);
			return ;
		}
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	p = (n % 10) + 48;
	write(fd, &p, 1);
}
