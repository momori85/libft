/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:11:18 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/14 13:11:19 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(int l, char **str)
{
	while (l + 1 > 0)
	{
		free(str[l]);
		l--;
	}
	free(str);
}

static char	**ft_string1(size_t j, char const *s, char **str, char c)
{
	size_t	l;
	size_t	h;
	size_t	i;

	l = 0;
	h = 0;
	i = 0;
	while (j--)
	{
		i = i + h;
		h = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i + h] != c && s[i + h] != '\0')
			h++;
		str[l] = ft_substr(s, i, h);
		if (str[l] == 0)
		{
			ft_free(l, str);
			return (0);
		}
		l++;
	}
	return (str);
}

static int	ft_count1(char const *s, char c, size_t i, size_t j)
{
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	j;

	if (s == 0)
		return (0);
	if (ft_strlen(s) == 0)
		return (ft_calloc(1, sizeof(char *)));
	j = ft_count1(s, c, 0, 0);
	if (j == 0)
		return (ft_calloc(1, sizeof(char *)));
	str = ft_calloc(j + 1, sizeof(char *));
	if (str == 0)
		return (0);
	str = ft_string1(j, s, str, c);
	return (str);
}
