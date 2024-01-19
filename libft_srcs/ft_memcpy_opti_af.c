/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_opti_af.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:37:13 by gpeiffer          #+#    #+#             */
/*   Updated: 2024/01/19 07:34:14 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// C'est un memcpy classique, sauf que je cast en long long (8 octets)
// -> donc 8 fois moins d'itérations, donc c'est un peu plus rapide.
// A la base j'avais code cette fonction pour ne pas timeout 
// sur GNL, mais c'est pratique donc c'est la.
void	ft_memcpy_opti_af(void *dest, const void *src, size_t n)
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
