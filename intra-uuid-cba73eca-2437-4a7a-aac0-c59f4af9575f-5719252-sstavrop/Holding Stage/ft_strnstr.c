/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:53:20 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:29:04 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little || !big)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     // Test case 1: Basic substring found within the given length
//     char big1[] = "Hello, World!";
//     char little1[] = "World";
//     printf("Test 1: Custom ft_strnstr: %s\n", ft_strnstr(big1, little1, sizeof(big1))? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big1, little1)? "Found" : "Not Found");

//     // Test case 2: Substring starts exactly at the beginning
//     char big2[] = "World, Hello!";
//     char little2[] = "World";
//     printf("\nTest 2: Custom ft_strnstr: %s\n", ft_strnstr(big2, little2, sizeof(big2))? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big2, little2)? "Found" : "Not Found");

//     // Test case 3: Substring not found
//     char big3[] = "Hello, World!";
//     char little3[] = "Goodbye";
//     printf("\nTest 3: Custom ft_strnstr: %s\n", ft_strnstr(big3, little3, sizeof(big3))? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big3, little3)? "Found" : "Not Found");

//     // Test case 4: Substring longer than the given length
//     char big4[] = "Hello, World!";
//     char little4[] = "Worldly";
//     printf("\nTest 4: Custom ft_strnstr: %s\n", ft_strnstr(big4, little4, 5)? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big4, little4)? "Found" : "Not Found");

//     // Test case 5: Empty big string
//     char big5[] = "";
//     char little5[] = "Example";
//     printf("\nTest 5: Custom ft_strnstr: %s\n", ft_strnstr(big5, little5, sizeof(big5))? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big5, little5)? "Found" : "Not Found");

//     // Test case 6: Empty little string
//     char big6[] = "Hello, World!";
//     char little6[] = "";
//     printf("\nTest 6: Custom ft_strnstr: %s\n", ft_strnstr(big6, little6, sizeof(big6))? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big6, little6)? "Found" : "Not Found");

//     // Test case 7: Little string longer than big string
//     char big7[] = "Hello";
//     char little7[] = "World";
//     printf("\nTest 7: Custom ft_strnstr: %s\n", ft_strnstr(big7, little7, sizeof(big7))? "Found" : "Not Found");
//     printf("Standard strstr: %s\n", strstr(big7, little7)? "Found" : "Not Found");

//     return 0;
// }
