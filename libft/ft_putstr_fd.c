/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:59:50 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:59:52 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr_fd(char const *str, int fd)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			write(fd, str, 1);
			str++;
		}
	}
}
