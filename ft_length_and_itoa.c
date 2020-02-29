/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length_and_itoa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:03:05 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:36:10 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_intlen_base(unsigned long n, int base)
{
	int	len;

	len = 0;
	if (n < 0)
		n *= -1;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / base;
		len++;
	}
	return (len);
}

int				ft_intlen_positive(int n)
{
	int	len;

	len = 0;
	if ((unsigned int)n == 2147483648 || (long)n == -2147483648)
	{
		len = 10;
		return (len);
	}
	if (n < 0)
		n *= -1;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

size_t			ft_strlen(char const *s)
{
	size_t	len;

	len = 0;
	while (*s && s)
	{
		len++;
		s++;
	}
	return (len);
}

static	char	ft_calculate_char(int res, char c)
{
	char	ret_char;

	ret_char = '0';
	while (res)
	{
		ret_char++;
		if (ret_char == ':')
			ret_char = c;
		res--;
	}
	return (ret_char);
}

char			*ft_itoa_base(unsigned long n, int base, char c)
{
	unsigned long	nb;
	int				res;
	int				n_len;
	char			*str;

	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		*str = '0';
		return (str);
	}
	nb = n;
	n_len = ft_intlen_base(n, base);
	if (!(str = ft_strnew(n_len)))
		return (NULL);
	while (nb)
	{
		res = nb % base;
		nb /= base;
		str[n_len - 1] = ft_calculate_char(res, c);
		n_len--;
	}
	return (str);
}
