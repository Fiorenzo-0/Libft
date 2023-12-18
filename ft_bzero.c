/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:43:22 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 15:59:10 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}
/*
int main(void)
{
    char    c[] = "g4ucci^&33gang";

    ft_bzero(c, 7);
    printf("%s \n", &c[8]);
    printf("%c \n", c[9]);
    printf("%s", &c[0]);
}*/
