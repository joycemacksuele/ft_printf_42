/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:43:33 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 11:29:12 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	t_var	*print_x(t_var *var, char *hex, int hex_len, int new_len)
{
	if (var->period_fw >= 0 && hex_len < var->period_fw)
		new_len = var->period_fw;
	var->len_format += (new_len < var->min_fw) ? var->min_fw : new_len;
	if (var->each_flag[0] != '-' && var->min_fw > 0 && var->min_fw > hex_len)
		space_or_zero(' ', var->min_fw - new_len);
	if (var->period_fw > hex_len)
		space_or_zero('0', var->period_fw - hex_len);
	ft_putstr(hex);
	if (var->each_flag[0] == '-' && var->min_fw > hex_len)
		space_or_zero(' ', var->min_fw - new_len);
	free(hex);
	return (var);
}

t_var			*specifier_x(t_var *var)
{
	unsigned int	n;
	char			c;
	char			*hex;
	int				hex_len;
	int				new_len;

	n = (unsigned int)va_arg(var->ap, int);
	c = (var->each_specifier == 'x') ? 'a' : 'A';
	if (!(hex = ft_itoa_base(n, 16, c)))
		return (NULL);
	hex_len = (*hex != '\0') ? ft_strlen(hex) : 0;
	new_len = hex_len;
	if (n == 0 && var->period_fw == 0)
	{
		space_or_zero(' ', var->min_fw);
		var->len_format += var->min_fw;
		free(hex);
		return (var);
	}
	if (var->each_flag[1] == '0' && !var->each_flag[0] && var->period_fw == -1
		&& var->min_fw > 0)
		var->period_fw = var->min_fw;
	print_x(var, hex, hex_len, new_len);
	return (var);
}
