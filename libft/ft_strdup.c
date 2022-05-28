/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:13:57 by jfriesen          #+#    #+#             */
/*   Updated: 2018/10/24 20:14:00 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*buf;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(buf = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	while (i >= 0)
	{
		buf[i] = src[i];
		i--;
	}
	return (buf);
}
