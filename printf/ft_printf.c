/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:02:45 by jsebasti          #+#    #+#             */
/*   Updated: 2022/10/09 23:14:42 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cond(char const c, va_list args, int count)
{
	if (c == 'c')
		count = ft_print_char(va_arg(args, int), count);
	if (c == 's')
		count = ft_print_str(va_arg(args, char *), count);
	if (c == 'p')
		count = ft_print_pointers(va_arg(args, void *), count);
	if (c == 'i' || c == 'd')
		count = ft_print_digits(va_arg(args, int), count);
	if (c == 'u')
		count = ft_print_unsigned(va_arg(args, unsigned int), count);
	if (c == 'x')
		count = ft_print_hexa_low(va_arg(args, long int), count);
	if (c == 'X')
		count = ft_print_hexa_up(va_arg(args, long int), count);
	if (c == '%')
		count = ft_print_char('%', count);
	return (count);
}

static int	check(char const *s, va_list args, int caract)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			caract = ft_cond((char)s[i], args, caract);
			if (caract == -1)
				return (-1);
		}
		else
		{
			caract = ft_print_char(s[i], caract);
			if (caract == -1)
				return (-1);
		}
		i++;
	}
	return (caract);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		caract;

	caract = 0;
	va_start(args, s);
	caract = check(s, args, caract);
	va_end(args);
	return (caract);
}
