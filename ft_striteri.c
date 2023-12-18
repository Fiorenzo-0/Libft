/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:35:24 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/20 16:23:21 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_upper(unsigned int index, char *c)
{
    if (index % 2 == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 'a' + 'A';
	}
}

int	main()
{
	char	str[] = "Hello, World!";

	printf("Original string: %s\n", str);
	ft_striteri(str, &to_upper);
	printf("String after applying to_upper: %s\n", str);
	return (0);
}*/