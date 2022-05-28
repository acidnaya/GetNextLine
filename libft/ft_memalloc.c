/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:33:12 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:33:15 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*a;
	size_t	i;

	i = 0;
	a = NULL;
	a = (void *)malloc(size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		((char *)a)[i] = 0;
		i++;
	}
	return (a);
}
