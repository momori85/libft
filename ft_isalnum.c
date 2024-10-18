/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:44:05 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/08 15:44:07 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int number)
{
	if (number > 96 && number < 123)
		return (1);
	if (number > 64 && number < 91)
		return (1);
	if (number > 47 && number < 58)
		return (1);
	return (0);
}
