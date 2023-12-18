/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:40:03 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/20 15:44:23 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
/*
static char modify_chars(unsigned int index, char c) {
    // Esempio: inverti lettere minuscole e maiuscole in base alla posizione
    if (index % 2 == 0)
	{
        if (c >= 'a' && c <= 'z')
            return (c - 'a' + 'A'); // Trasforma lettere minuscole in maiuscole
    }
	else
	{
        if (c >= 'A' && c <= 'Z')
            return (c - 'A' + 'a'); // Trasforma lettere maiuscole in minuscole
    }
    return (c); 
}

int main()
{
    char original[] = "Test string to modify";
    char *result = ft_strmapi(original, &modify_chars);
    if (result) {
        printf("Original: %s\nModified: %s\n", original, result);
        free(result);
    } else {
        printf("Error: Failed to allocate memory or invalid input.\n");
    }
    return (0);
}*/