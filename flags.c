/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:50:33 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/16 20:15:44 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*flags(t_var *var)
{
	if (var->i >= ft_strlen(var->tmp2_format))
		return (NULL);
	while (var->tmp2_format[var->i] == '-' || var->tmp2_format[var->i] == '0')
	{
		while (var->tmp2_format[var->i] == '-')
		{
			var->each_flag[0] = '-';
			var->i++;
		}
		while (var->tmp2_format[var->i] == '0')
		{
			var->each_flag[1] = '0';
			var->i++;
		}
	}
	return (var);
}
