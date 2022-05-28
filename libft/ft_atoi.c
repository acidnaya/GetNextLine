/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 12:53:17 by jfriesen          #+#    #+#             */
/*   Updated: 2018/10/22 12:53:21 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		ft_atoi_help(char **str, int *sign)
{
	*sign = 1;
	if ((**str) == '-')
	{
		*sign = -1;
		(*str)++;
	}
	else if ((**str) == '+')
		(*str)++;
}

int				ft_atoi(char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	while ((*str == '\t') || (*str == ' ') || (*str == '\r') ||
			(*str == '\f') || (*str == '\v') || (*str == '\n'))
		str++;
	ft_atoi_help(&str, &sign);
	result = 0;
	i = 0;
	while (((str[i] - '0') >= 0) && ((str[i] - '0') <= 9))
	{
		if (i > 18)
			return (sign == 1 ? -1 : 0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > 9223372036854775807)
		return (sign == 1 ? -1 : 0);
	return (((int)result) * sign);
}
