/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:46:44 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/07 11:47:32 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str, char const *src)
{
	int		i;
	int		j;
	char	*new;

	if (str == 0 || src == 0)
		return (0);
	i = ft_strlen(str);
	j = ft_strlen(src);
	new = ft_calloc((i + j + 1), sizeof(char));
	if (new == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	while (src[j])
	{
		new[i + j] = src[j];
		j++;
	}
	return (new);
}
