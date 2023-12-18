/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:16:56 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/24 11:50:15 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
	else
		free(lst);
}
/*
int main(void)
{
	t_list *list = ft_lstnew("Hello, world!");

	printf("Before deletion: %s\n", (char *)list->content);
	ft_lstdelone(list, free);
	printf("After deletion: %s\n", (char *)list->content);

	return (0);
}*/
