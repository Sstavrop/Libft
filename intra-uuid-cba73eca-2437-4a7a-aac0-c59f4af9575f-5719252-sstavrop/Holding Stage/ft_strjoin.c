/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:30:37 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:28:15 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*total;
	int		i;
	int		j;

	total = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	i = 0;
	j = 0;
	if (!total)
		return (NULL);
	while (s1[i])
		total[j++] = s1[i++];
	i = 0;
	while (s2[i])
		total[j++] = s2[i];
	total[j] = 0;
	return (total);
}

// // Your custom functions here
// size_t	ft_strlen(const char *s);
// char	*ft_strjoin(const char *s1, const char *s2);

// int main(void) {
//     // Test 1: Joining empty strings
//     char *result1 = ft_strjoin("" , "");
//     printf("Test 1: %s\n", result1? result1 : "Failed");
//     free(result1); // Free allocated memory

//     // Test 2: Joining single-character strings
//     char *result2 = ft_strjoin("a", "b");
//     printf("Test 2: %s\n", result2? result2 : "Failed");
//     free(result2);

//     // Test 3: Joining longer strings
//     char *result3 = ft_strjoin("Hello, ", "world!");
//     printf("Test 3: %s\n", result3? result3 : "Failed");
//     free(result3);

//     // Test 4: Compare with strcat
//     char s1[] = "Hello, ";
//     char s2[] = "world!";
//     char buffer[50]; // Ensure this is large enough for both strings plus null terminator
//     strcpy(buffer, s1);
//     strcat(buffer, s2);
//     printf("Test 4: Standard strcat - %s\n", buffer);

//     // Additional comparison logic if needed
//     char *customResult4 = ft_strjoin(s1, s2);
//     printf("Custom ft_strjoin - %s\n", customResult4? customResult4 : "Failed");
//     free(customResult4);

//     return 0;
// }
