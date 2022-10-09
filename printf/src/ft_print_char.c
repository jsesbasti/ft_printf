/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:11:54 by jsebasti          #+#    #+#             */
/*   Updated: 2022/10/09 19:39:46 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_char(char const c, int count)
{
	int	error;

	error = 0;
	if (!error)
	{
		if (write(1, &c, 1) == -1)
			error = 1;
		else
			count += 1;
	}
	else
		return (error);
	return (count);
}
