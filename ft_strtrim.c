/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:38:06 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/06 16:21:01 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
#include <stdio.h>

int main()
{
    const char *input_string = "Hello, World!eH";
    const char *trim_set = "He!";

    char *trimmed_string = ft_strtrim(input_string, trim_set);

    if (trimmed_string != NULL)
	{
        printf("Trimmed String: '%s'\n", trimmed_string);
        free(trimmed_string);
	}
	else
        printf("Memory allocation error or invalid input.\n");

    return (0);
}*/