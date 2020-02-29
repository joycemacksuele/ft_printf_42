/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:22:21 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/22 17:04:44 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		scan_format(t_var *var)
{
	if (ft_strcmp(var->tmp_format, "%") == 0)
		return (0);
	while (var->tmp_format[var->i])
	{
		if (var->tmp_format[var->i] == '%')
		{
			putstr_format(var, var->len);
			initiate_flags_precisions_specifiers(var);
			call_analyzer_functions(var);
			var->len = 0;
		}
		else
		{
			var->len++;
			var->len_format++;
		}
		var->i++;
	}
	putstr_format(var, var->len);
	return (var->len_format);
}
