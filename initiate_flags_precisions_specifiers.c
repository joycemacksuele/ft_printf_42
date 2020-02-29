/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_flags_precisions_specifiers.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:41:07 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/16 21:58:08 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*initiate_flags_precisions_specifiers(t_var *var)
{
	var->each_specifier = '\0';
	var->each_flag[0] = '\0';
	var->each_flag[1] = '\0';
	var->min_fw = 0;
	var->period_fw = -1;
	return (var);
}
