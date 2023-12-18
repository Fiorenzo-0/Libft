/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:17:12 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 15:59:47 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (src < dest)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*(d++) = *(s++);
	return (dest);
}
/*
int main() 
{
    char src[] = "Pefforza deh!";
    char dest[50];

    ft_memmove(dest, src, 1);

    printf("Copied string: %s\n", dest);

    return 0;
}*/