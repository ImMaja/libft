/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:29:29 by gpeiffer          #+#    #+#             */
/*   Updated: 2024/01/16 13:18:44 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_memcpy_opti_af(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == 0 && src == 0)
		return ;
	i = 0;
	while (i + sizeof(long long) <= n)
	{
		*((long long *)(dest + i)) = *((long long *)(src + i));
		i += sizeof(long long);
	}
	while (i < n)
	{
		*((char *)dest + i) = ((const char *)src)[i];
		i++;
	}
}

void	*ft_realloc(void *p, size_t p_len, size_t size)
{
	void	*new;

	new = malloc(size);
	if (new == NULL)
	{
		free(p);
		return (NULL);
	}
	if (p == NULL)
		return (new);
	ft_memcpy_opti_af(new, p, p_len);
	free(p);
	return (new);
}
