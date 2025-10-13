/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:39:38 by scheragh          #+#    #+#             */
/*   Updated: 2025/03/23 16:30:43 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printstr(char *s);
int		ft_printchar(int c);
int		ft_printinteger(int n);
int		ft_printhexlow(unsigned int n);
int		ft_printhexup(unsigned int n);
int		ft_printunsignint(unsigned int nb);
int		ft_printptr(void *ptr);
#endif
