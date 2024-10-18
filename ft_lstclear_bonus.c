/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:52:19 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/15 13:52:20 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;
	t_list	*next;

	if (lst == 0 || del == 0)
		return ;
	i = *lst;
	if (i == 0)
		*lst = NULL;
	else
	{
		while (i)
		{
			next = i->next;
			del(i->content);
			free(i);
			i = next;
		}
		*lst = NULL;
	}
}
