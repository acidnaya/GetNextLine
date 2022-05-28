/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:39:39 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 13:39:44 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int		ft_memcross(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (pdst == psrc)
			return (1);
		i++;
		pdst++;
	}
	i = 0;
	pdst = (unsigned char *)dst;
	while (i < n)
	{
		if (pdst == psrc)
			return (0);
		i++;
		psrc++;
	}
	return (1);
}

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned long long	i;
	unsigned char		*dst1;
	unsigned char		*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if (ft_memcross(dst, src, n) == 1)
	{
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			n--;
			dst1[n] = src1[n];
		}
	}
	return (dst1);
}
