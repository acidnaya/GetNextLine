/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:53:11 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 15:53:13 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int symbol)
{
	int		i;
	int		r;
	char	*s;

	i = 0;
	r = -1;
	s = (char *)str;
	while ((str[i]) != '\0')
	{
		if (str[i] == (char)symbol)
			r = i;
		i++;
	}
	if (symbol == '\0')
		return (&(s[i]));
	if (r != -1)
		return (&(s[r]));
	return (NULL);
}
