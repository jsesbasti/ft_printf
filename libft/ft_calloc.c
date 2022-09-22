/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:27:27 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/21 20:12:18 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sizet;
	void	*mtx;

	sizet = count * size;
	mtx = (void *)malloc(sizet);
	if (!mtx)
		return (NULL);
	mtx = ft_memset(mtx, 0, sizet);
	return (mtx);
}
