/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:30:29 by jfreitas          #+#    #+#             */
/*   Updated: 2020/01/28 11:31:50 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strncpy(char *dest, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strcpy(char *dest, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strcmp(char const *s1, char const *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*((unsigned char*)s1) - *((unsigned char*)s2));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*fresh_sub_str;

	fresh_sub_str = ft_strnew(len);
	if (fresh_sub_str == NULL || s == NULL)
		return (NULL);
	if (start < ft_strlen(s))
		ft_strncpy(fresh_sub_str, &s[start], len);
	return (fresh_sub_str);
}
