/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:52:44 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 15:52:46 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				s1len;
	int				s2len;
	size_t			i;

	s1len = 0;
	s2len = 0;
	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;
	if (s1len < s2len)
		s1len = s2len;
	i = 0;
	while ((s1len != 0) && (i < n))
	{
		if (*s1 != *s2)
			return ((int)(*((unsigned char *)s1) - *((unsigned char *)s2)));
		s1++;
		s2++;
		i++;
		s1len--;
	}
	return (0);
}
