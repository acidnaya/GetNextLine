/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:52:59 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 15:53:01 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	k;
	char	*s;

	s = (char *)str;
	if (to_find[0] == '\0')
		return (s);
	k = 0;
	while (str[k] != '\0')
	{
		i = 0;
		while ((to_find[i] == str[k + i]) && ((k + i) < len))
		{
			i++;
			if (to_find[i] == '\0')
				return (&(s[k]));
		}
		k++;
	}
	return (NULL);
}
