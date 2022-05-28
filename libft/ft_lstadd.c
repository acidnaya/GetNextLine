/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:36:09 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/29 19:36:11 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if ((alst != NULL) && (new != NULL) && (*alst != new))
	{
		new->next = *alst;
		*alst = new;
	}
}
