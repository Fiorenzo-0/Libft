/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:23:00 by lbruschi          #+#    #+#             */
/*   Updated: 2023/12/14 17:51:40 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	word_counter;

	i = 0;
	word_counter = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			word_counter++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (word_counter);
}

static char	*ft_putword(char *word, char const *s, int i, int n_char)
{
	int	j;

	j = 0;
	while (n_char > 0)
	{
		word[j] = s[i - n_char];
		j++;
		n_char--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_enter(char const *s, char c, char **splitted, int word_counter)
{
	int	i;
	int	position_word;
	int	n_char;

	i = 0;
	position_word = 0;
	n_char = 0;
	while (position_word < word_counter)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			n_char++;
		}
		splitted[position_word] = (char *)malloc(sizeof(char) * (n_char + 1));
		if (!splitted[position_word])
			return (ft_free_array(splitted, position_word));
		ft_putword(splitted[position_word], s, i, n_char);
		n_char = 0;
		position_word++;
	}
	splitted[position_word] = NULL;
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char			**splitted;
	unsigned int	n_word;

	if (!s)
		return (NULL);
	n_word = ft_count_words(s, c);
	splitted = (char **)malloc(sizeof(char *) * (n_word + 1));
	if (!splitted)
		return (NULL);
	splitted = ft_enter(s, c, splitted, n_word);
	return (splitted);
}
/*
int	main()
{
	char 	test_string[] = "Lorem ipsum dolor sit amet, consectetur";
	char	**result = ft_split(test_string, ' ');

	if (result == NULL)
	{
		printf("Errore durante la divisione della stringa.\n");
		return (1);
	}
	printf("Sottostringhe separate:\n");
	int i = 0;

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}*/
