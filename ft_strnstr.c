/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:11:12 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:13 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	h;

	i = 0;
	h = ft_strlen(little);
	if (little == NULL || *little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && (i + h) <= len)
	{
		if (ft_strncmp(&big[i], little, h) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Addio2 mondo crudele";
	const char	*to_find = "mondo";
	size_t		len = 87;
	char		*result = ft_strnstr(str, to_find, len);

	if (result != 0)
	{
		printf("Substring found: %s\n", result);
	} else
	{
			printf("Substring not found.\n");
	}
	return (0);
}*/