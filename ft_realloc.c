/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:24:22 by amblanch          #+#    #+#             */
/*   Updated: 2025/06/27 11:33:45 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	size_t	len;
	void	*new;

	len = ft_strlen(ptr);
	if (len - size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(sizeof(void *) * (size + len));
	if (new == 0)
	{
		free(ptr);
		return (NULL);
	}
	ft_memset(new, 0, (size + len));
	ft_memmove(new, ptr, (size + len));
	free(ptr);
	return (new);
}
