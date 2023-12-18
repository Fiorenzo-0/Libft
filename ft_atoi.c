/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:30:05 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/22 16:17:36 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
				sign = -1;
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + (str[i] - 48);
			i++;
		}
		return (res * sign);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = " \n\t\v\r\f-347805vaf";

	printf("%i\n", ft_atoi(str));
	return (0);
}*/