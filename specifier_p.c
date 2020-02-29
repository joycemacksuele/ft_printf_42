/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:40:51 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 14:31:28 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	t_var	*print_p(t_var *var, char *hex, int hex_len)
{
	if (var->each_flag[0] != '-' && var->min_fw > 0 && var->min_fw > hex_len)
		space_or_zero(' ', var->min_fw - hex_len);
	write(1, "0x", 2);
	if (var->period_fw > hex_len)
	{
		space_or_zero('0', (var->period_fw - hex_len) + 2);
		var->len_format += (var->period_fw - hex_len) + 2;
	}
	ft_putstr(hex);
	if (var->each_flag[0] == '-' && var->min_fw > 0 && var->min_fw > hex_len)
		space_or_zero(' ', var->min_fw - hex_len);
	free(hex);
	return (var);
}

t_var			*specifier_p(t_var *var)
{
	unsigned long	n;
	char			*hex;
	int				hex_len;

	n = (unsigned long)va_arg(var->ap, void*);
	if (!(hex = ft_itoa_base(n, 16, 'a')))
		return (NULL);
	if (n == 0 && var->period_fw == 0)
		*hex = '\0';
	hex_len = (*hex != '\0') ? ft_strlen(hex) + 2 : 2;
	if (var->each_flag[1] == '0' && !var->each_flag[0] && var->period_fw == -1
		&& var->min_fw > 0)
	{
		var->period_fw = var->min_fw - 2;
		var->min_fw = 0;
	}
	var->len_format += (hex_len < var->min_fw) ? var->min_fw : hex_len;
	print_p(var, hex, hex_len);
	return (var);
}
