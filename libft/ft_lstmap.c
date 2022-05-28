/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:02:38 by jfriesen          #+#    #+#             */
/*   Updated: 2018/11/30 15:02:42 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_lstclean(t_list **alst)
{
	t_list	*next;

	if ((alst != NULL) && (*alst != NULL))
	{
		next = *alst;
		while (next != NULL)
		{
			next = (*alst)->next;
			(*alst)->next = NULL;
			if ((*alst)->content != NULL)
				free((*alst)->content);
			free(*alst);
			*alst = next;
		}
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*first;
	t_list	*cur;

	if ((lst == NULL) || (f == NULL))
		return (NULL);
	first = NULL;
	ptr = f(lst);
	if (!(first = ft_lstnew((void const *)(ptr->content), ptr->content_size)))
		return (NULL);
	lst = lst->next;
	cur = first;
	while (lst != NULL)
	{
		ptr = f(lst);
		cur->next = ft_lstnew((void const *)(ptr->content), ptr->content_size);
		if (cur->next == NULL)
			return (ft_lstclean(&first));
		cur = cur->next;
		lst = lst->next;
	}
	return (first);
}
