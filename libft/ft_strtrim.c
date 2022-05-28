/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:48:55 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:48:57 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		ft_strtrim_help(char const *s, int *i, int *k)
{
	while (s[*i] != '\0')
		(*i)++;
	(*i)--;
	while ((*i > 0) && ((s[*i] == ' ') || (s[*i] == '\n') || (s[*i] == '\t')))
		(*i)--;
	while ((s[*k] == ' ') || (s[*k] == '\n') || (s[*k] == '\t'))
		(*k)++;
}

static char		*ft_nullstr(char *str)
{
	if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		a;
	int		k;
	char	*str;

	i = 0;
	a = 0;
	k = 0;
	str = NULL;
	if (s == NULL)
		return (0);
	ft_strtrim_help(s, &i, &k);
	if (i >= k)
		str = (char *)malloc(sizeof(char) * (i - k + 2));
	else
		return (ft_nullstr(str));
	if (str == NULL)
		return (NULL);
	while (k <= i)
	{
		str[a] = s[k++];
		a++;
	}
	str[a] = '\0';
	return (str);
}
