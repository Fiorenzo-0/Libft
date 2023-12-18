/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:59:35 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:18 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	printf("%c \n", ft_tolower('f'));
	printf("%c", ft_tolower('A'));
	return (0);
}*/