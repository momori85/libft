/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_header.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:26:44 by amblanch          #+#    #+#             */
/*   Updated: 2025/06/27 11:33:56 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_push(char **array, char *new)
{
	__uint32_t	new_cap;
	t_header	*h;

	h = (t_header *)array - 1;
	if (h->size + 1 > h->capacity)
	{
		new_cap = h->capacity * 2;
		h = ft_realloc(h, sizeof(t_header) + new_cap * sizeof(char *));
		if (!h)
			return (NULL);
		h->capacity = new_cap;
		array = (char **)(h + 1);
	}
	array[h->size++] = new;
	return (array);
}

void	ft_stats(char **array, int *extern_size, int *extern_cap)
{
	t_header	*h;

	h = (t_header *)array - 1;
	*extern_size = h->size;
	*extern_cap = h->capacity;
}

char	**ft_malloc_h(__uint32_t min_cap)
{
	t_header	*ptr;
	void		**block;

	block = malloc(sizeof(t_header) + min_cap * sizeof(char *));
	ptr = (t_header *)block;
	ptr->capacity = min_cap;
	ptr->size = 0;
	return ((char **)(ptr + 1));
}

void	ft_free_h(char **array)
{
	t_header	*h;
	__uint32_t	i;

	if (array == NULL)
		return ;
	h = (t_header *)array - 1;
	i = 0;
	while (i < h->size)
	{
		if (array[i])
			free(array[i]);
		i++;
	}
	free(h);
}
