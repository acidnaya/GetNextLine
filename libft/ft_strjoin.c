/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:46:21 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:46:38 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		ft_strjoin_help(char const *s1, char const *s2, int *i, int *k)
{
	while (s1[*i] != '\0')
		(*i)++;
	while (s2[*k] != '\0')
		(*k)++;
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	str = NULL;
	ft_strjoin_help(s1, s2, &i, &k);
	if (!(str = (char *)malloc(sizeof(char) * (i + k + 1))))
		return (NULL);
	str[i + k] = '\0';
	while ((k > 0) && (i >= 0))
	{
		str[i + k - 1] = s2[k - 1];
		k--;
	}
	while (i > 0)
	{
		str[i - 1] = s1[i - 1];
		i--;
	}
	return (str);
}
