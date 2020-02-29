/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_vars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 18:32:47 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/22 15:03:57 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*initiate_vars(t_var *var)
{
	var->tmp_format = (char *)var->format;
	var->tmp2_format = (char *)var->format;
	var->len_format = 0;
	var->len = 0;
	var->i = 0;
	return (var);
}
