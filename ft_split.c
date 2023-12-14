/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:13:40 by gpeiffer          #+#    #+#             */
/*   Updated: 2023/11/16 09:54:04 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char		**calc(char const *s, char c, char **arr);
static	size_t	count_str_len(char const *s, char c);
static	size_t	count_strs(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (0);
	arr = (char **) malloc(sizeof(char *) * (count_strs(s, c) + 1));
	if (arr == 0)
		return (0);
	return (calc(s, c, arr));
}

static	char	**calc(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	j;
	size_t	curr_str;

	i = 0;
	curr_str = 0;
	while (*(s + i) != '\0')
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i) != '\0')
		{
			j = 0;
			arr[curr_str] = malloc(sizeof(char) * count_str_len(s + i, c) + 1);
			if (arr[curr_str] == 0)
				return (0);
			while (*(s + i) != c && *(s + i) != '\0')
				arr[curr_str][j++] = *(s + i++);
			arr[curr_str][j] = '\0';
			curr_str++;
		}
	}
	arr[curr_str] = 0;
	return (arr);
}

static	size_t	count_str_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
		i++;
	return (i);
}

static	size_t	count_strs(char const *s, char c)
{
	size_t	i;
	size_t	delimitor_counter;

	i = 0;
	delimitor_counter = 0;
	if (*(s) == '\0')
		return (0);
	while (*(s + i) == c)
		i++;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + i) == c)
				i++;
			if (*(s + i) != '\0')
				delimitor_counter++;
		}
		else
			i++;
	}
	return (delimitor_counter + 1);
}
