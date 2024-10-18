/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:52:28 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/10 16:52:30 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_first(size_t i, char const *s1, size_t j, char const *set)
{
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			j = 0;
			i++;
		}
		if (set[j] != s1[i])
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		h;
	char		*str;

	j = 0;
	if (s1 == 0 || set == 0)
		return (0);
	i = ft_first(0, s1, 0, set);
	h = ft_strlen(s1) - 1;
	while (set[j])
	{
		if (set[j] == s1[h])
		{
			j = 0;
			h--;
		}
		if (set[j] != s1[h])
			j++;
	}
	str = ft_substr(s1, i, h - i + 1);
	return (str);
}
