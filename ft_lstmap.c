/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalk <sbalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:02:44 by sbalk             #+#    #+#             */
/*   Updated: 2023/05/17 16:44:30 by sbalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//It's nessecary to use del on the return value of (*f) because it could return a malloced void pointer

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_content = f(lst->content);
	new_lst = ft_lstnew(new_content);
	if (new_lst == NULL)
	{
		del(new_content);
		return (NULL);
	}
	new_node = new_lst;
	lst = lst->next;
	while(lst)
	{
		new_content = f(lst->content);
		new_node->next = ft_lstnew(new_content);
		if (new_node->next == NULL)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = new_node->next;
		lst = lst->next;
	}
	return(new_lst);
}
