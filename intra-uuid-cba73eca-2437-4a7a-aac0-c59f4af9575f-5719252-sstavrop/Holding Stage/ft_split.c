/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:17:29 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/25 20:30:23 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	calculate_word_count(const char *s, char c)
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

static	char	**allocate_result_array(size_t num_words)
{
	char	**result;

	result = malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

static	const char	*skip_delimiters(const char *str, char delimiter)
{
	while (*str == delimiter)
		str++;
	return (str);
}

static	char	*extract_and_copy_word(const char *s, char c)
{
	char	*word;
	size_t	len;

	word = NULL;
	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s - len, len + 1);
	return (word);
}

static	void	free_allocated_memory(char **result, size_t num_words)
{
	char	**current;

	current = result;
	while (num_words--)
		free(*current++);
	free(result);
}

char	**ft_split(const char *s, char c)
{
	size_t		num_words;
	char		**result;
	const char	*current_s;
	char		*word;
	size_t		i;

	i = 0;
	num_words = calculate_word_count(s, c);
	result = allocate_result_array(num_words);
	if (!result)
		return (NULL);
	while (i < num_words)
	{
		current_s = skip_delimiters(current_s, c);
		word = extract_and_copy_word(current_s, c);
		if (!word)
		{
			free_allocated_memory(result, i);
			return (NULL);
		}
		result[i] = word;
		current_s += ft_strlen(word);
	}
	result[num_words] = NULL;
	return (result);
}

// static size_t	ss_word_count(char const *s, char c)
// {
// 	size_t	word_count;
// 	size_t	trigger;

// 	word_count = 0;
// 	trigger = 0;
// 	while (*s)
// 	{
// 		if (*s != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			word_count++;
// 		}
// 		else if (*s == c)
// 			trigger = 0;
// 		s++;
// 	}
// 	return (word_count);
// }

// char	**ft_split(const char *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		k;
// 	char	**result;
// 	char	*word;

// 	i = 0;
// 	j = ss_word_count(s, c);
// 	result = malloc((j + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (!(*s))
// 			break ;
// 		k = 0;
// 		while (*s != c && *s)
// 		{
// 			s++;
// 			k++;
// 		}
// 		word = malloc(k + 1);
// 		if (!word)
// 		{
// 			while (i--)
// 				free(result[i]);
// 			free(result);
// 			return (NULL);
// 		}
// 		ft_strlcpy(word, s - k, k + 1);
// 		result[i++] = word;
// 	}
// 	result[i] = NULL;
// 	return (result);
// }