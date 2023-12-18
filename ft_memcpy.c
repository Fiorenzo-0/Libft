/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:34:30 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 15:59:43 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int main()
{
    char src[] = "Hello, World!";
    char dest[20];
    size_t n = 14;
    ft_memcpy(dest, src, n);

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}*/