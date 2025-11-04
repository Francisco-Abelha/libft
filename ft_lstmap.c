/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:44:33 by fgoncal2          #+#    #+#             */
/*   Updated: 2025/11/03 23:06:48 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*to_upper2(void *content)
{
	char	*s;
	char	*start;

	s = (char *)content;
	start = s;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	t_list	*new_content;
	t_list	*new_node;
	t_list	*next;

	mapped = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		next = lst->next;
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped, new_node);
		lst = next;
	}
	return (mapped);
}
