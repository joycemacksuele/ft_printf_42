/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:30:50 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 11:00:20 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char	*ft_strdup(char const *s1)
{
	char	*dest;

	dest = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}

char	*ft_strndup(char const *s1, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!(s2 = ft_strnew(n)))
		return (NULL);
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len--)
	{
		*str++ = c;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
