/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:49:21 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/26 15:49:24 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int i)
{
	if ((i >= 48) && (i <= 57))
		return (1);
	return (0);
}
