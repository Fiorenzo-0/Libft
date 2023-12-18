/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:13:46 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:15 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (unsigned char)c)
			return ((char *)s +1);
	return (NULL);
}
/*
#include <stdio.h>
int main() 
{
    const char *input_string = "Questo è un esempio";
    int character_to_find = 'e';
    char *result = ft_strrchr(input_string, character_to_find);
    if (result != NULL)
		printf("%s", ft_strrchr(input_string, character_to_find));
    } else
        printf("'%c' non trovato nella stringa.\n", character_to_find);
    return 0;
}*/