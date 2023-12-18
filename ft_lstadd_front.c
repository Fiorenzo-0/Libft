/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:30:17 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/23 18:36:45 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
int	main()
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));

	// Assegnazione di valori casuali ai contenuti dei nodi
	node1->content = "Primo nodo";
	node2->content = "Secondo nodo";
	node3->content = "Terzo nodo";

	// Inizializzazione della lista
	t_list *list = NULL;

	// Aggiunta dei nodi in testa alla lista
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	// Stampa dei contenuti della lista
	printf("Contenuti della lista:\n");
	t_list *current = list;
	while (current != NULL) {
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Libera la memoria allocata per i nodi della lista
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/