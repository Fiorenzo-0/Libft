/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:28:19 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:00 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	printf("%p\n", ft_strdup("alabastro"));
	return (0);
}*/