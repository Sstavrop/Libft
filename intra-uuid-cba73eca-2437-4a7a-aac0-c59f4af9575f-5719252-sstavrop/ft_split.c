/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:17:29 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/26 15:19:37 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ss_word_count(char const *s, char c)
{
	size_t	word_count;
	size_t	trigger;

	word_count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			word_count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (word_count);
}

static size_t	ss_extract_word_length(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

static char	*ss_allocate_and_copy_word(const char *s, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static char	**ss_engine(const char *s, char c, char **result, int j)
{
	size_t	len;
	char	*word;
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!(*s))
			break ;
		len = ss_extract_word_length(s, c);
		word = ss_allocate_and_copy_word(s, len);
		if (!word)
		{
			while (j-- >= 0)
				free(result[j]);
			free(result);
			return (NULL);
		}
		result[i++] = word;
		s += len;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = ss_word_count(s, c);
	result = malloc((j + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ss_engine(s, c, result, j);
	return (result);
}
