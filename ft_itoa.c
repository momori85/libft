/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:23:56 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/14 08:23:58 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int count, int i)
{
	while (count > 0)
	{
		count = count / 10;
		i++;
	}
	return (i);
}

static char	*ft_fill(char *str, size_t i, int n, int j)
{
	while (i--)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	if (j == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	count = n;
	if (count == -2147483648)
		return (ft_strdup("-2147483648"));
	if (count == 0)
		return (ft_strdup("0"));
	if (count < 0)
	{
		++i;
		count = count * -1;
		j = 1;
	}
	n = count;
	i = ft_count(count, i);
	str = ft_calloc(i, sizeof(char));
	if (str == 0)
		return (0);
	str = ft_fill(str, i - 1, n, j);
	return (str);
}
