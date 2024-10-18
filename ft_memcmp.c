/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:36:36 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/09 19:36:39 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		occur;
	const char	*str1;
	const char	*str2;

	occur = 0;
	str1 = s1;
	str2 = s2;
	if (!n)
		return (0);
	while (*str1 == *str2 && occur < n - 1)
	{
		str1++;
		str2++;
		occur++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
