/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:13:40 by marvin            #+#    #+#             */
/*   Updated: 2022/09/18 18:59:54 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && i < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}

	return (ft_strlen(dst));
}
/*
int	main()
{
	char *d = "Hola buenas";
	const char *s = "Que tal?";

	printf("esto es el original del strlcat: %lu", strlcat(d, s, 5));
	return (0);
}
*/
