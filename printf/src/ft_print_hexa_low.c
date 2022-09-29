/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:20:27 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/28 19:59:24 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hexa_low(unsigned int hx, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (hx > 15)
		count = ft_print_hexa_low(hx / 16, count);
	count = ft_print_char(base[hx % 16], count);
	if (count == -1)
		return (count);
	return (count);
}
