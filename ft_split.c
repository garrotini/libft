/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:54:57 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 16:35:54 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	count;
	int		flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && !flag)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static char	*get_next_word(const char **str, char c)
{
	char	*word;
	size_t	len;

	while (**str == c)
		(*str)++;
	len = 0;
	while (**str && **str != c)
	{
		len++;
		(*str)++;
	}
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, (*str) - len, len + 1);
	return (word);
}

void	free_split(char **split, size_t count)
{
	while (count--)
		free(split[count]);
	free(split);
}

char	**ft_split(const char *str, char c)
{
	char	**split;
	size_t	word_count;
	size_t	i;

	if (!str)
		return (NULL);
	word_count = count_words(str, c);
	split = ft_calloc((word_count + 1), sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		split[i] = get_next_word(&str, c);
		if (!split[i])
		{
			free_split(split, i);
			return (0);
		}
		i++;
	}
	split[word_count] = NULL;
	return (split);
}

/* int main()
{
	char str[] = "aa bb cc";
	char c = ' ';
	char **s;
	size_t i = 0;

	s = ft_split(str, c);

	while (i < count_words(str, c))
	{
		printf("%s\n", s[i]);
		i++;
	}
	
	i = 0;

	while (i < count_words(str,c))
	{
		free(s[i]);
		i++;
	}
	free(s);
} */
