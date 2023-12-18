/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:37:43 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:02 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	r = 0;
	while (dest[r] != '\0')
		r++;
	destlen = r;
	srclen = ft_strlen(src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[r] = src[i];
		i++;
		r++;
	}
	dest[r] = '\0';
	return (destlen + srclen);
}
/*
int	main()
{
	char	src[] = "la vita?";
	char	dest[60] = "Ciao, come ";

	printf("%li \n", ft_strlcat(dest, src, 14));
	printf("%s \n", dest);
	return (0);
}*/