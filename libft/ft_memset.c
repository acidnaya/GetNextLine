/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:11:04 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 13:11:07 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned int	i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)memptr;
	while (i < num)
	{
		s[i] = (unsigned char)val;
		i++;
	}
	return (s);
}
