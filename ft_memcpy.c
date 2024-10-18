/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:15:21 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/09 00:15:24 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	s = src;
	d = dest;
	if (dest == 0 && src == 0)
		return (0);
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
