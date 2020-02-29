/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 13:42:55 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/24 11:09:52 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_var
{
	va_list			ap;

	const char		*format;
	char			*tmp_format;
	char			*tmp2_format;

	char			each_specifier;

	char			each_flag[2];

	int				min_fw;
	int				period_fw;

	int				len_format;
	int				len;
	size_t			i;
}					t_var;

int					ft_printf(const char *format, ...);
t_var				*initiate_vars(t_var *var);
t_var				*initiate_flags_precisions_specifiers(t_var *var);
int					scan_format(t_var *var);
void				putstr_format(t_var *var, int len);
int					call_analyzer_functions(t_var *var);
t_var				*flags(t_var *var);
t_var				*min_field_width(t_var *var);
t_var				*precision_period(t_var *var);
t_var				*specifiers(t_var *var);
int					space_or_zero(char c, int len);
t_var				*specifier_c(t_var *var);
t_var				*specifier_s(t_var *var);
t_var				*specifier_p(t_var *var);
t_var				*specifier_d_i(t_var *var);
t_var				*specifier_u(t_var *var);
t_var				*specifier_x(t_var *var);
t_var				*specifier_other(t_var *var);

int					ft_intlen_base(unsigned long n, int base);
int					ft_intlen_positive(int n);
size_t				ft_strlen(char const *s);
char				*ft_itoa_base(unsigned long n, int base, char c);
char				*ft_strnew(size_t size);
char				*ft_strdup(char const *s1);
char				*ft_strndup(char const *s1, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
char				*ft_strncpy(char *dest, char const *src, size_t len);
char				*ft_strcpy(char *dest, char const *src);
int					ft_strcmp(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putnbr_unsigned(unsigned int n);
void				ft_putnbr_long(long int n);

#endif
