/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:36:27 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/29 19:36:29 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list			*ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL)
		return (NULL);
	if (*alst == NULL)
	{
		alst = NULL;
		return (NULL);
	}
	del((*alst)->content, (*alst)->content_size);
	(*alst)->next = NULL;
	free(*alst);
	*alst = NULL;
	return (*alst);
}
