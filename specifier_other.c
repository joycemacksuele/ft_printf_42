/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_other.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:38:54 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:35:08 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*specifier_other(t_var *var)
{
	if (var->tmp2_format[var->i] != '\0' && var->min_fw > 0)
	{
		if (var->each_flag[1] == '0' && var->each_flag[0] != '-')
			space_or_zero('0', var->min_fw - 1);
		if (var->each_flag[0] != '-' && var->each_flag[1] != '0')
			space_or_zero(' ', var->min_fw - 1);
		write(1, &var->tmp2_format[var->i], 1);
		if (var->each_flag[0] == '-')
			space_or_zero(' ', var->min_fw - 1);
		var->len_format += var->min_fw;
	}
	else if (var->tmp2_format[var->i] != '\0' && var->min_fw == 0)
	{
		write(1, &var->tmp2_format[var->i], 1);
		var->len_format += 1;
	}
	return (var);
}
