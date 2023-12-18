/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:20:15 by lbruschi          #+#    #+#             */
/*   Updated: 2023/10/31 15:59:18 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_isalnum('o'));
	return (0);
}*/