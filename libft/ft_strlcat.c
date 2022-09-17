/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:13:40 by marvin            #+#    #+#             */
/*   Updated: 2022/09/17 19:14:17 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (j < dstsize)
	{
		if (src[j] != '\0')
		{
			dst[i] = src[j];
			j++;
			i++;
		}
	}
	return (i);
}

int	main()
{
	char *d = "Hola buenas";
	const char *s = "Que tal?";

	printf("esto es el original del strlcat: %lu", ft_strlcat(d, s, 5));
	return (0);
}
