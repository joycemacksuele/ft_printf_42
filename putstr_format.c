/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:09:50 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 14:27:17 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		putstr_format(t_var *var, int len)
{
	char	*fmt;

	if (len <= 0)
		return ;
	if (len > 0)
	{
		if (!(fmt = ft_substr(var->tmp_format, var->i - len, len)))
			return ;
		ft_putstr(fmt);
		free(fmt);
	}
}
