/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsebasti <jsebasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:34:20 by jsebasti          #+#    #+#             */
/*   Updated: 2022/09/25 19:34:20 by jsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
