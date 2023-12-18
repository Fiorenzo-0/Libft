/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:18:48 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/24 11:17:11 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !(*f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
static void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("Hello");
	t_list	*node2 = ft_lstnew("World");
	t_list	*node3 = ft_lstnew("!");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstiter(list, print_content);
	return (0);
}
*/