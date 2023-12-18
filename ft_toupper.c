/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:09:12 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/22 16:20:05 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	while (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	printf("%c \n", ft_toupper('f'));
	printf("%c", ft_toupper('A'));
	return (0);
}*/