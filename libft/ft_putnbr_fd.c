/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:42:39 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:42:42 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int nb, int fd)
{
	int ten;
	int minusone;

	minusone = 0;
	ten = 1;
	if (nb == -2147483648)
	{
		nb += 1;
		minusone = 1;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if ((nb / 10) > 0)
		ft_putnbr_fd(nb / 10, fd);
	if (minusone == 0)
		ft_putchar_fd((nb % 10) + '0', fd);
	else
		ft_putchar_fd((nb % 10 + 1) + '0', fd);
}
