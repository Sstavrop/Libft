/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:22:53 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:28:57 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// int main() {
//     // Test case 1: Equal strings up to n characters
//     printf("Test 1: Comparing \"hello\" and \"hello\"\n");
//     if (ft_strncmp("hello", "hello", 5) == 0) {
//         printf("PASS\n");
//     } else {
//         printf("FAIL\n");
//     }

//     // Test case 2: Unequal strings up to n characters
//     printf("Test 2: Comparing \"hello\" and \"hi\"\n");
//     if (ft_strncmp("hello", "hi", 3) > 0) {
//         printf("PASS\n");
//     } else {
//         printf("FAIL\n");
//     }

//     // Test case 3: First string shorter than n characters
//     printf("Test 3: Comparing \"hello\" and \"hi\"\n");
//     if (ft_strncmp("hello", "hi", 6) < 0) {
//         printf("PASS\n");
//     } else {
//         printf("FAIL\n");
//     }

//     // Test case 4: Second string shorter than n characters
//     printf("Test 4: Comparing \"hello\" and \"hi\"\n");
//     if (ft_strncmp("hello", "hi", 5) > 0) {
//         printf("PASS\n");
//     } else {
//         printf("FAIL\n");
//     }

//     // Test case 5: Strings differ after n characters
//     printf("Test 5: Comparing \"hello world\" and \"hello hi\"\n");
//     if (ft_strncmp("hello world", "hello hi", 10) > 0) {
//         printf("PASS\n");
//     } else {
//         printf("FAIL\n");
//     }

//     return 0;
// }