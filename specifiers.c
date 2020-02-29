/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:20:54 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 15:01:58 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*specifiers(t_var *var)
{
	if (var->i >= ft_strlen(var->tmp2_format))
		return (NULL);
	else if (var->tmp2_format[var->i])
		var->each_specifier = var->tmp2_format[var->i];
	if (var->each_specifier == 'c')
		specifier_c(var);
	else if (var->each_specifier == 's')
		specifier_s(var);
	else if (var->each_specifier == 'p')
		specifier_p(var);
	else if (var->each_specifier == 'd' || var->each_specifier == 'i')
		specifier_d_i(var);
	else if (var->each_specifier == 'u')
		specifier_u(var);
	else if (var->each_specifier == 'x' || var->each_specifier == 'X')
		specifier_x(var);
	else
		specifier_other(var);
	return (var);
}
