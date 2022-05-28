/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:42:06 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:42:08 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		ft_itoa_help(int *i, int *k, int *num)
{
	if (*num == 0)
		*i = 1;
	if (*num <= 0)
		(*k)++;
	while (*num != 0)
	{
		(*k)++;
		*num /= 10;
	}
}

char			*ft_itoa(int n)
{
	int		k;
	int		i;
	int		num;
	char	*s;

	i = 0;
	k = 0;
	num = n;
	ft_itoa_help(&i, &k, &num);
	if (!(s = (char *)malloc((k + 1) * sizeof(char))))
		return (NULL);
	s[k] = '\0';
	while (k > 0)
	{
		num = n % 10;
		n = n / 10;
		s[k - 1] = num < 0 ? -num + '0' : num + '0';
		k--;
	}
	if ((s[0] == '0') && (!i))
		s[0] = '-';
	return (s);
}
