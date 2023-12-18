/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:23:24 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/23 18:36:58 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = malloc(sizeof(t_list));
	node1->content = "Hello";
	node1->next = NULL;

	t_list	*node2 = malloc(sizeof(t_list));
	node2->content = "world";
	node2->next = NULL;

	t_list	*node3 = malloc(sizeof(t_list));
	node3->content = "!";
	node3->next = NULL;
	list = node1;
	node1->next = node2;
	node2->next = node3;
    t_list	*last = ft_lstlast(list);

	if (last)
		printf("Ultimo elemento della lista: %s\n", (char *)last->content);
	else
		printf("La lista è vuota.\n");
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/