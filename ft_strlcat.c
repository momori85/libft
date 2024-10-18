/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:43:57 by amblanch          #+#    #+#             */
/*   Updated: 2024/07/22 11:39:03 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	i;

	i = 0;
	if (dst == 0 && size == 0 && src != 0)
		return (ft_strlen(src));
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (size <= a)
		return (size + b);
	while ((a + i) < size - 1 && src[i])
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[a + i] = '\0';
	return (b + a);
}
