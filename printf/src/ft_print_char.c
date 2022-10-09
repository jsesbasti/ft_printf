/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:11:54 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/29 19:45:43 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_char(char const c, int count)
{
	if (write(1, &c, 1) == -1)
	{
		count = -1;
		return (-1);
	}
	else
		count += 1;
	return (count);
}
