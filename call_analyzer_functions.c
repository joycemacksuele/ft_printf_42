/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_analyzer_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:22:54 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 11:14:28 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		call_analyzer_functions(t_var *var)
{
	var->i++;
	flags(var);
	min_field_width(var);
	precision_period(var);
	specifiers(var);
	return (var->len_format);
}
