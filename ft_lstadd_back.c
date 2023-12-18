/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:09:59 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/23 18:37:30 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main(void)
{
	// Create a sample linked list
	t_list *list = ft_lstnew("Node 1");
	ft_lstadd_back(&list, ft_lstnew("Node 2"));
	ft_lstadd_back(&list, ft_lstnew("Node 3"));

	// Print the linked list
	t_list *current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}*/