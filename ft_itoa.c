/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:40:01 by lbruschi          #+#    #+#             */
/*   Updated: 2023/11/22 16:32:40 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*make_number(int num_len, long nbr)
{
	long	i;
	char	*str;
	char	last_digit;

	i = 0;
	str = (char *)ft_calloc(sizeof(char), (num_len + 1));
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		last_digit = (nbr % 10) + '0';
		str[num_len - i - 1] = last_digit;
		nbr = nbr / 10;
		i++;
	}
	str[num_len] = '\0';
	return (str);
}

static int	ft_check_len(long n)
{
	long	i;
	size_t	num;

	i = 1;
	if (n < 0)
	{
		num = -n;
		i++;
	}
	else
		num = n;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		digit_len;
	long	a;
	char	*number;

	a = n;
	digit_len = ft_check_len(a);
	number = make_number(digit_len, a);
	return (number);
}
/*
int main() 
{
	int num1 = 12345;
	int num2 = -6789;
	int num3 = 0;

	char *str1 = ft_itoa(num1);
	char *str2 = ft_itoa(num2);
	char *str3 = ft_itoa(num3);

	printf("Number 1 as string: %s\n", str1);
	printf("Number 2 as string: %s\n", str2);
	printf("Number 3 as string: %s\n", str3);

	free(str1);
	free(str2);
	free(str3);

	return (0);
}*/