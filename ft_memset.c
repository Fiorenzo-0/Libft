/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:15:52 by lbruschi          #+#    #+#             */
/*   Updated: 2023/12/14 17:53:55 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	buffer[20];
	int	i;
    for (i = 0; i < 20; i++)
    	buffer[i] = 0;
    printf("Array prima di ft_memset:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
    ft_memset(buffer, 42, 10);
    printf("Array dopo ft_memset:\n");
	for (i = 0; i < 20; i++)
		printf("%d ", buffer[i]);
	printf("\n");
}*/
