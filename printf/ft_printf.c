/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:02:45 by jsebasti          #+#    #+#             */
/*   Updated: 2022/10/09 20:05:19 by jsebasti         ###   ########.fr       */
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

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		caract;
	int		i;

	caract = 0;
	i = 0;
	va_start(args, s);
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
			caract = ft_print_char(s[i], caract);
		i++;
	}
	va_end(args);
	return (caract);
}
