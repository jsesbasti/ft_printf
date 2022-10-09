/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:13:57 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/29 19:34:22 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hexa_lower(unsigned long long hexa, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (hexa > 15)
		count = ft_print_hexa_lower(hexa / 16, count);
	count = ft_print_char(base[hexa % 16], count);
	return (count);
}

int	ft_print_pointers(void *ptr, int count)
{
	count = ft_print_str("0x", count);
	count = ft_print_hexa_lower((unsigned long long)ptr, count);
	return (count);
}
