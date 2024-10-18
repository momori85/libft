/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:28:34 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/10 15:28:37 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		len1;

	i = 0;
	if (s == 0)
		return (0);
	len1 = ft_strlen(s);
	if ((start + len) == (ft_strlen(s) + 1))
		len -= 1;
	if (len >= ft_strlen(s))
		len = len1 - start;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	str = ft_calloc((len + 1), (sizeof(char)));
	if (str == 0)
		return (0);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
