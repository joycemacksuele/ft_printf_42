/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_or_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:24:25 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 14:30:12 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		space_or_zero(char c, int len)
{
	char	*str;

	if (len > 0)
	{
		if (!(str = ft_strnew(len)))
			return (-1);
		ft_memset(str, c, len);
		write(1, str, len);
		free(str);
	}
	return (0);
}
