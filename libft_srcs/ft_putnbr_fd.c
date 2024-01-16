/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeiffer <gpeiffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:07:28 by gpeiffer          #+#    #+#             */
/*   Updated: 2024/01/16 11:31:05 by gpeiffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	void	write_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write_fd('-', fd);
		nb *= -1;
	}		
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		write_fd(nb + '0', fd);
}

static	void	write_fd(char c, int fd)
{
	write(fd, &c, 1);
}
