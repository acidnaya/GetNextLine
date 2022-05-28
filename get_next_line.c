/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfriesen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:28:59 by jfriesen          #+#    #+#             */
/*   Updated: 2018/12/03 13:29:01 by jfriesen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstdelelem(t_list **first, t_list **elem)
{
	t_list	*ptr;

	if ((first != NULL) && (*first != NULL) && (*elem != NULL))
	{
		if (!((*first == *elem) && ((*elem)->next == NULL)))
		{
			if (*first == *elem)
				*first = (*elem)->next;
			else
			{
				ptr = *first;
				while (ptr->next != *elem)
					ptr = ptr->next;
				ptr->next = (*elem)->next;
			}
		}
		else
			*first = NULL;
		if ((*elem)->content != NULL)
			free((*elem)->content);
		free(*elem);
		*elem = NULL;
	}
}

char	*ft_str_before_n(t_list **first, t_list **elem)
{
	char	*result;
	char	*new;
	int		i;
	int		k;

	new = NULL;
	i = 0;
	while (((char *)((*elem)->content))[i] != '\n')
		i++;
	if (!(result = ft_strsub((char const *)((*elem)->content), 0, i)))
	{
		ft_lstdelelem(first, elem);
		return (NULL);
	}
	k = (int)ft_strlen((char const *)((*elem)->content));
	if (k > (i + 1))
		new = ft_strsub((char const *)((*elem)->content), (i + 1), k - (i + 1));
	if (new == NULL)
		ft_lstdelelem(first, elem);
	else
	{
		free((*elem)->content);
		(*elem)->content = new;
	}
	return (result);
}

int		ft_buff_expansion(t_list **first, t_list **elem, char *buff)
{
	char *str1;

	str1 = NULL;
	if (((char *)((*elem)->content))[0] == '\0')
	{
		str1 = ft_strnew(BUFF_SIZE + 1);
	}
	else
		str1 = ft_strjoin((char const *)((*elem)->content), (char const *)buff);
	if (str1 == NULL)
	{
		ft_lstdelelem(first, elem);
		return (0);
	}
	else if (((char *)((*elem)->content))[0] == '\0')
	{
		ft_bzero(str1, (size_t)(BUFF_SIZE + 1));
		ft_strcpy(str1, buff);
	}
	free((*elem)->content);
	(*elem)->content = str1;
	return (1);
}

int		gnl_help(const int fd, char **line, t_list **first, t_list **elem)
{
	int				sd;
	char			buff[BUFF_SIZE + 1];

	while (ft_strchr((*elem)->content, '\n') == NULL)
	{
		ft_bzero(buff, (size_t)(BUFF_SIZE + 1));
		sd = (int)read(fd, buff, BUFF_SIZE);
		if ((sd == 0) && (((char *)((*elem)->content))[0] == '\0'))
			return (0);
		else if (sd == 0)
		{
			*line = ft_strnew(ft_strlen((*elem)->content));
			if (*line == NULL)
				return (-1);
			ft_strcpy(*line, (*elem)->content);
			ft_lstdelelem(first, elem);
			return (1);
		}
		if (!(ft_buff_expansion(first, elem, buff)))
			return (-1);
	}
	if (!(*line = ft_str_before_n(first, elem)))
		return (-1);
	return (((sd != -1) || (*elem != NULL)) ? 1 : 0);
}

int		get_next_line(const int fd, char **line)
{
	char			buff[1];
	static t_list	*first;
	t_list			*elem;

	if ((fd < 0) || (BUFF_SIZE < 1) || (line == NULL)
		|| (read(fd, buff, 0) < 0))
		return (-1);
	*line = NULL;
	elem = first;
	while (elem != NULL)
	{
		if ((int)(elem->content_size) == fd)
			break ;
		elem = elem->next;
	}
	if (elem == NULL)
	{
		if (!(elem = ft_lstnew("\0", 1)))
			return (-1);
		elem->next = first;
		first = elem;
		elem->content_size = fd;
	}
	return (gnl_help(fd, line, &first, &elem));
}
