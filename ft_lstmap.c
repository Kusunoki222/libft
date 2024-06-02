/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:40:42 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/02 19:17:35 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	t_list	*temp;
	void	*newcontent;

	newlist = NULL;
	while (lst != NULL)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (!newnode)
		{
			if (newcontent != NULL)
				free(newcontent);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		if (newlist == NULL)
			newlist = newnode;
		else
			temp->next = newnode;
		temp = newnode;
		lst = lst->next;
	}
	return (newlist);
}
