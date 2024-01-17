/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:35:25 by gpeiffer          #+#    #+#             */
/*   Updated: 2024/01/17 08:42:53 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// Cette fonction NE REALLOUE PAS de la memoire au pointer,
// Elle renvoie un NOUVEAU pointer de la taille de size
// et copie le contenue de p vers new.
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