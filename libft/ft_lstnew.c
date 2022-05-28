/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:36:18 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/29 19:36:20 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*new;
	unsigned char	*cont;

	new = NULL;
	cont = NULL;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->next = NULL;
	if ((content == NULL) || (content_size == 0))
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(cont = (unsigned char *)malloc(content_size)))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(cont, content, content_size);
		new->content = cont;
		new->content_size = content_size;
	}
	return (new);
}
