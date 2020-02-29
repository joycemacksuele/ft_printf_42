/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_period.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:53:01 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/16 22:02:53 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*precision_period(t_var *var)
{
	if (var->i >= ft_strlen(var->tmp2_format))
		return (NULL);
	while (var->tmp2_format[var->i] == '.')
	{
		var->i++;
		if (var->tmp2_format[var->i] == '*')
		{
			var->period_fw = (int)va_arg(var->ap, int);
			if (var->period_fw < 0)
				var->period_fw = -1;
			var->i++;
			return (var);
		}
		var->period_fw = 0;
		while (var->tmp2_format[var->i] >= '0' &&
				var->tmp2_format[var->i] <= '9')
		{
			var->period_fw *= 10;
			var->period_fw += (var->tmp2_format[var->i] - 48);
			var->i++;
		}
	}
	return (var);
}
