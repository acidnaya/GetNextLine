/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:36:34 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/29 19:36:36 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	if ((alst != NULL) && (*alst != NULL))
	{
		next = *alst;
		while (next != NULL)
		{
			next = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			(*alst)->next = NULL;
			free(*alst);
			*alst = next;
		}
	}
}
