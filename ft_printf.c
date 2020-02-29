/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 16:59:47 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 14:54:35 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_var	*var;
	int		len;

	if (!(var = (t_var*)malloc(sizeof(t_var))))
		return (-1);
	var->format = (char*)format;
	initiate_vars(var);
	if (format)
	{
		va_start(var->ap, format);
		scan_format(var);
		va_end(var->ap);
	}
	len = var->len_format;
	free(var);
	return (len);
}
