/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:53:21 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 15:53:23 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int k;

	if (to_find[0] == '\0')
		return ((char *)str);
	k = 0;
	while (str[k] != '\0')
	{
		i = 0;
		while (to_find[i] == str[k + i])
		{
			i++;
			if (to_find[i] == '\0')
				return ((&((char *)str)[k]));
		}
		k++;
	}
	return (NULL);
}
