/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:52:16 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:47:24 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		ft_strlcat_counter(char *dst, size_t *i, size_t *r)
{
	while (dst[(*i)] != '\0')
	{
		(*i)++;
		(*r)++;
	}
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t k;
	size_t r;

	i = 0;
	k = 0;
	r = 0;
	ft_strlcat_counter(dst, &i, &r);
	if (size < r)
		r = size;
	while (src[k] != '\0')
	{
		k++;
		r++;
	}
	k = 0;
	while ((src[k] != '\0') && ((i + 1) < size))
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (r);
}
