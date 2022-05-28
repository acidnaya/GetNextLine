/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:40:25 by jfriesen          #+#    #+#             */
/*   Updated: 2018/10/22 11:40:28 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
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
		ft_putchar('-');
		nb *= -1;
	}
	if ((nb / 10) > 0)
		ft_putnbr(nb / 10);
	if (minusone == 0)
		ft_putchar((nb % 10) + '0');
	else
		ft_putchar((nb % 10 + 1) + '0');
}
