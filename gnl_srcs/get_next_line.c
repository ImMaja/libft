/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:29:33 by gpeiffer          #+#    #+#             */
/*   Updated: 2024/01/16 13:17:50 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static ssize_t	fill_buffer(int fd, void *buffer, size_t buff_index)
{
	ssize_t	read_status;

	if (buff_index != 0)
		return (BUFFER_SIZE + 1);
	read_status = read(fd, buffer, BUFFER_SIZE);
	if (read_status == BUFFER_SIZE || read_status < 0)
		return (read_status);
	*((char *)buffer + read_status) = '\0';
	return (read_status);
}

static char	*at_eof(size_t *buff_index, size_t *i, char *s)
{
	if (*i == 0)
	{
		free(s);
		return (NULL);
	}
	s = (char *)ft_realloc(s, *i, *i + 1);
	*(s + *i) = '\0';
	*buff_index = 0;
	*i = 0;
	return (s);
}

static char	*at_eol(size_t *buff_index, size_t *i, char *s)
{
	s = (char *)ft_realloc(s, *i, *i + 2);
	*(s + *i) = '\n';
	*(s + *i + 1) = '\0';
	*i = 0;
	*buff_index = *buff_index + 1;
	return (s);
}
static char	*read_buffer(int fd, char *s, size_t buff_iter)
{
	static void		*buffer[BUFFER_SIZE];
	static size_t	buff_index;
	static size_t	i;

	if (fill_buffer(fd, buffer, buff_index) < 0)
	{
		free(s);
		return (NULL);
	}
	if (*((char *)buffer) == '\0' && buff_iter == 0)
		return (NULL);
	s = (char *)ft_realloc(s, i, BUFFER_SIZE * (buff_iter + 1));
	while (buff_index != BUFFER_SIZE)
	{
		if (*((char *)buffer + buff_index) == '\n')
			return (at_eol(&buff_index, &i, s));
		if (*((char *)buffer + buff_index) == '\0')
			return (at_eof(&buff_index, &i, s));
		*(s + i) = *((char *)buffer + buff_index);
		buff_index++;
		i++;
	}
	buff_index = 0;
	return (read_buffer(fd, s, ++buff_iter));
}

char	*get_next_line(int fd)
{
	char	*s_line;

	if (BUFFER_SIZE == 0)
		return (NULL);
	s_line = NULL;
	return (read_buffer(fd, s_line, 0));
}