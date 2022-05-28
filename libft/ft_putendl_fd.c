/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:41:21 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/27 15:41:23 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putendl_fd(const char *str, int fd)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			write(fd, str, 1);
			str++;
		}
		write(fd, "\n", 1);
	}
}
