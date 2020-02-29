/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_field_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:57:20 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/16 22:01:01 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*min_field_width(t_var *var)
{
	if (var->i >= ft_strlen(var->tmp2_format))
		return (NULL);
	if (var->tmp2_format[var->i] == '*')
	{
		var->min_fw = (int)va_arg(var->ap, int);
		if (var->min_fw < 0)
		{
			var->min_fw *= (-1);
			var->each_flag[0] = '-';
		}
		var->i++;
		return (var);
	}
	while (var->tmp2_format[var->i] >= '0' && var->tmp2_format[var->i] <= '9')
	{
		var->min_fw *= 10;
		var->min_fw += (var->tmp2_format[var->i] - 48);
		var->i++;
	}
	return (var);
}
