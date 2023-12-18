/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:35:18 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/24 10:11:38 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (*lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
		*lst = NULL;
	}
	else
		return ;
}
/*
static void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("Node 1");
	t_list	*node2 = ft_lstnew("Node 2");
	t_list	*node3 = ft_lstnew("Node 3");

	node1->next = node2;
	node2->next = node3;
	printf("Original List:\n");
	t_list	*current = node1;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&node1, del);
	printf("\nCleared List:\n");
	current = node1;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}
*/