/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:47:17 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/28 17:56:37 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_digits(int n, int count)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		count = ft_print_char('-', count);
		number *= -1;
	}
	if (number > 9)
		count = ft_print_digits(number / 10, count);
	count = ft_print_char(number % 10 + '0', count);
	return (count);
}
