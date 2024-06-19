/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:08:54 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 10:57:22 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s1, const char *set) 
{
    size_t start;
	size_t end;
    char *str;
    size_t len;

    if (!s1 ||!set)
        return ;
    len = ft_strlen(s1); 
    start = 0;
    end = len - 1;
    size_t *bit_map = calloc(256, sizeof(size_t));
    for (int i = 0; set[i]; i++) 
	{
        if (bit_map[set[i]]) continue;
        bit_map[set[i]] = 1;
    }
    while 
	(start < len && bit_map[(unsigned char)s1[start]])
        start++;
    while 
	(end >= start && bit_map[(unsigned char)s1[end]])
        end--;
    str = malloc(sizeof(char) * (end - start + 2));
    if (!str)
        return NULL;
    char *dst = str;
    while (start <= end)
        *dst++ = s1[start++]
    *dst = '\0';
    free(bit_map);
    return str;
}

// int main() 
// {
//     const char *test_strings[] = {
//         "   Hello, World   ", // Test with leading and trailing spaces
//         "   \t\nHello, World!\n\t   ", // Test with leading and trailing whitespace characters
//         "xxHello, Worldxx", // Test with characters to be trimmed at the ends
//         "", // Test with an empty string
//         "x" // Test with a single character
//     };

//     const char *sets[] = 
// 	{
//         " \t\n", // Whitespace characters
//         "x" // Character 'x'
//     };

//     for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); ++i) {
//         for (int j = 0; j < sizeof(sets) / sizeof(sets[0]); ++j) {
//             char *trimmed = ft_strtrim(test_strings[i], sets[j]);
//             printf("Original: %s\n", test_strings[i]);
//             printf("Trimmed: %s\n", trimmed? trimmed : "(null)");
//             printf("Test Passed: %s\n", trimmed? "Yes" : "No");
//             free(trimmed); // Free the allocated memory
//         }
//     }

//     return 0;
// }
