/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:17:20 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 13:17:23 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *memptr, size_t n)
{
	unsigned int	i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)memptr;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}
