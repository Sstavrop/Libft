/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:17:29 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/24 17:22:05 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static	size_t	ss_word_count(char const *s, char c)
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

#include "libft.h"

// Helper function to count words in a string until a delimiter character
static size_t ss_word_count(char const *s, char c) {
    size_t word_count = 0;
    size_t trigger = 0;
    while (*s) {
        if (*s!= c && trigger == 0) {
            trigger = 1;
            word_count++;
        } else if (*s == c) {
            trigger = 0;
        }
        s++;
    }
    return word_count;
}

// Helper function to skip delimiters and find the start of a word
static char *find_next_word_start(char const *s, char c) {
    while (*s == c && *s) {
        s++;
    }
    return (char *)s;
}

// Helper function to copy a word into a newly allocated buffer
static char *copy_word(char *dest, char const *src, int len) {
    ft_strlcpy(dest, src, len + 1); // Copying len characters and adding a null terminator
    return dest;
}

char **ft_split(const char *s, char c) {
    int i = 0;
    int j = ss_word_count(s, c);
    char **result = malloc((j + 1) * sizeof(char *));
    if (!result) {
        return NULL;
    }

    char *word;
    while (*s) {
        s = find_next_word_start(s, c); // Skip delimiters to find the next word
        if (!(*s)) {
            break; // End of string reached
        }

        int k = 0;
        while (*s!= c && *s) { // Count characters until the next delimiter or end of string
            s++;
            k++;
        }

        word = malloc(k + 1); // Allocate memory for the word
        if (!word) {
            while (i--) {
                free(result[i]); // Free previously allocated words
            }
            free(result); // Free the result array
            return NULL;
        }

        copy_word(word, s - k, k); // Copy the word into the allocated buffer
        result[i++] = word; // Store the word in the result array
    }

    result[i] = NULL; // Null-terminate the result array
    return result;
}
