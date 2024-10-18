/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:53:42 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/09 18:53:45 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = 0;
	while (n-- && !str)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			str = (unsigned char *)s;
		s++;
	}
	return (str);
}
