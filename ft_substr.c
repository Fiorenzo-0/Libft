/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:21:22 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/06 14:56:06 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	const char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;

	char *result = ft_substr(s, start, len);

	if (result)
	{	
		printf("Substring: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation error or invalid input.\n");
	return (0);
}*/