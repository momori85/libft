/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:03:17 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/09 20:03:19 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2[i])
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char *) s1 + i);
			++j;
		}
		++i;
	}
	return (0);
}
