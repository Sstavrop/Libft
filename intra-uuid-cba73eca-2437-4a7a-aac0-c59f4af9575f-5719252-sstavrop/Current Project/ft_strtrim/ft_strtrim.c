/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:08:54 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 12:46:48 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

bool	ss_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

size_t	ss_trimmed_length(const char *s, const char *set)
{
	size_t	len;
	size_t	start;
	size_t	end;

	len = ft_strlen(s);
	start = 0;
	while (start < len && ss_is_in_set(s[start], set))
		start++;
	end = len -1;
	while (end > start && ss_is_in_set(s[end], set))
		end--;
	return (end - start + 1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	trimmed_length;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	trimmed_length = ss_trimmed_length(s1, set);
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_strncpy(trimmed, s1 + trimmed_length, len - trimmed_length + 1);
	trimmed[trimmed_length] = '\0';
	return trimmed;	
}

int main() {
    const char *test_strings[] = {"   Hello, World   ", ""};
    const char *sets[] = {" \t\n", ""};

    for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); ++i) {
        for (int j = 0; j < sizeof(sets) / sizeof(sets[0]); ++j) {
            char *trimmed = ft_strtrim(test_strings[i], sets[j]);
            printf("Original: %s\n", test_strings[i]);
            printf("Trimmed: %s\n", trimmed? trimmed : "(null)");
            printf("Leftover: ");
            if (trimmed) {
                printf("%.*s\n", ss_trimmed_length(test_strings[i], sets[j]), test_strings[i]);
            } else {
                printf("(null)\n");
            }
            printf("Test Passed: %s\n", trimmed? "Yes" : "No");
            free(trimmed); // Free the allocated memory
        }
    }

    return 0;
}
