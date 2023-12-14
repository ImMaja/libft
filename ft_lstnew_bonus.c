/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:32:41 by gpeiffer          #+#    #+#             */
/*   Updated: 2023/11/14 11:42:00 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s_l;

	s_l = (t_list *)malloc(sizeof(t_list));
	if (s_l == 0)
		return (0);
	s_l->content = content;
	s_l->next = 0;
	return (s_l);
}
