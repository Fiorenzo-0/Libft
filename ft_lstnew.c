/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:45:18 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/23 18:37:13 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main(void)
{
	// Create a new node with content "Hello, world!"
	t_list *node = ft_lstnew("Hello, world!");
	// Check if the node was created successfully
	if (node != NULL) {
		printf("New node created successfully.\n");
		printf("Content: %s\n", (char *)node->content);
	} else {
		printf("Failed to create new node.\n");
	}
	return 0;
}*/
