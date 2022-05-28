/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:43:58 by jfriesen          #+#    #+#             */
/*   Updated: 2018/10/22 14:44:02 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
