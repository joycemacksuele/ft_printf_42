/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:41:06 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:34:57 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var			*specifier_c(t_var *var)
{
	int	c;

	c = (unsigned char)va_arg(var->ap, int);
	if (var->period_fw >= 0)
		var->period_fw = -1;
	if (var->min_fw > 0)
	{
		if (var->each_flag[1] == '0' && var->each_flag[0] != '-')
			space_or_zero('0', var->min_fw - 1);
		else if (var->each_flag[0] != '-' && var->min_fw > 0)
			space_or_zero(' ', var->min_fw - 1);
		write(1, &c, 1);
		if (var->each_flag[0] == '-')
			space_or_zero(' ', var->min_fw - 1);
		var->len_format += (var->min_fw > 0) ? var->min_fw : 1;
	}
	else
	{
		write(1, &c, 1);
		var->len_format += 1;
	}
	return (var);
}
