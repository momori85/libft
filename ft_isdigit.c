/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:16:11 by amblanch          #+#    #+#             */
/*   Updated: 2024/10/08 15:16:25 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int number)
{
	if (number > 47 && number < 58)
		return (1);
	return (0);
}
