/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:49:48 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/29 19:34:21 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hexa_up(unsigned int hx, int count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hx > 15)
		count = ft_print_hexa_up(hx / 16, count);
	count = ft_print_char(base[hx % 16], count);
	if (count == -1)
		return (count);
	return (count);
}
