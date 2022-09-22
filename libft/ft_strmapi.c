/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:17:33 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/22 16:40:06 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	s1 = ft_strdup(s);
	if (!s || !f || !s1)
		return (0);
	i = 0;
	while (s[i])
	{
		s1[i] = f(i, s1[i]);
		i++;
	}
	return (s1);
}
