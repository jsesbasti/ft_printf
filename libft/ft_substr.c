/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:47:33 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/22 20:02:45 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*s1;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (len > s_len)
		len = s_len;
	if (start >= s_len)
	{
		s1 = (char *)malloc(1);
		if (s1 == NULL)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	s1 = (char *)malloc(len + 1);
	if (s1 == NULL)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(s1, s, len + 1);
	return (s1);
}