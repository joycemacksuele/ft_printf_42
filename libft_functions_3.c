/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 10:24:08 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:36:34 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	if (s)
	{
		while (*s != '\0')
		{
			ft_putchar(*s);
			s++;
		}
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 4294967295 || n < 0)
		return ;
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10);
		ft_putnbr_unsigned(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putnbr_long(long int n)
{
	if (n < -9223372036854775807 - 1 || n > 9223372036854775807)
		return ;
	if (n == -9223372036854775807 - 1)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -n;
	}
	if (n > 9)
	{
		ft_putnbr_long(n / 10);
		ft_putnbr_long(n % 10);
	}
	else
		ft_putchar(n + 48);
}
