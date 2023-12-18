/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:57:16 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/23 18:37:05 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
/*
int	main(void)
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));

	node1->content = "Primo nodo";
	node1->next = node2;
	node2->content = "Secondo nodo";
	node2->next = node3;
	node3->content = "Terzo nodo";
	node3->next = NULL;
	t_list	*lst = node1;
	int	size = ft_lstsize(lst);
	printf("La dimensione della lista è: %d\n", size);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/