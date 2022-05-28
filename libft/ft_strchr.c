/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:51:38 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 15:51:40 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int symbol)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		if (str[i] == (char)symbol)
			return (&(((char *)str)[i]));
		i++;
	}
	if (symbol == '\0')
		return (&(((char *)str)[i]));
	return (NULL);
}
