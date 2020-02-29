/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:40:22 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:31:40 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	*specifier_s(t_var *var)
{
	char	*s;
	int		s_len;

	s = (char*)va_arg(var->ap, char*);
	if (s && var->period_fw >= 0)
		s = ft_substr(s, 0, var->period_fw);
	else if (s && var->period_fw == -1)
		s = ft_strdup(s);
	else if (!s && var->period_fw >= 0)
		s = ft_strndup("(null)", var->period_fw);
	else if (!s && var->period_fw == -1)
		s = ft_strdup("(null)");
	s_len = (*s != '\0') ? ft_strlen(s) : 0;
	var->len_format += s_len + (var->min_fw >= s_len ? var->min_fw - s_len : 0);
	if (var->each_flag[1] == '0' && var->each_flag[0] != '-')
		space_or_zero('0', var->min_fw - s_len);
	else if (var->each_flag[0] != '-' && var->min_fw >= 1)
		space_or_zero(' ', var->min_fw - s_len);
	ft_putstr(s);
	if (var->each_flag[0] == '-')
		space_or_zero(' ', var->min_fw - s_len);
	free(s);
	return (var);
}
