/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:42:51 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:11 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]
			&& (unsigned char)s1[i] == (unsigned char)s2[i]) && n > i + 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("couucou", "couuucou", 8));
	return (0);
}*/