/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:41:17 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:34:07 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	print_d_i(t_var *var, long int n, int n_len)
{
	int		n_negative;

	n_negative = (n < 0) ? 1 : 0;
	n *= (n < 0) ? -1 : 1;
	if (n_negative)
		write(1, "-", 1);
	if (var->period_fw > n_len)
		space_or_zero('0', var->period_fw - n_len);
	if (n == 0)
	{
		if (var->period_fw == 0 && var->min_fw > 0)
			ft_putchar(' ');
		else if (var->period_fw == 0 && !var->min_fw)
		{
			var->len_format -= 1;
			ft_putstr("\0");
		}
		else
			ft_putnbr(n);
	}
	else if (n != (-2147483648))
		ft_putnbr_long(n);
	else if (n == 2147483648)
		write(1, "2147483648", 10);
}

t_var			*specifier_d_i(t_var *var)
{
	long int	n;
	int			n_len;
	int			new_len;

	n = (long int)va_arg(var->ap, int);
	n_len = ft_intlen_positive(n);
	new_len = n_len;
	if (var->each_flag[1] == '0' && !var->each_flag[0] && var->period_fw == -1
		&& var->min_fw > 0)
	{
		var->period_fw = var->min_fw;
		if (n < 0 || var->each_flag[0])
			var->period_fw--;
	}
	if (var->period_fw >= 0 && n_len <= var->period_fw)
		new_len = var->period_fw;
	if (n < 0)
		new_len++;
	var->len_format += (new_len < var->min_fw) ? var->min_fw : new_len;
	if (var->each_flag[0] != '-' && var->min_fw > 0 && var->min_fw > n_len)
		space_or_zero(' ', var->min_fw - new_len);
	print_d_i(var, n, n_len);
	if (var->each_flag[0] == '-' && var->min_fw > n_len)
		space_or_zero(' ', var->min_fw - new_len);
	return (var);
}
