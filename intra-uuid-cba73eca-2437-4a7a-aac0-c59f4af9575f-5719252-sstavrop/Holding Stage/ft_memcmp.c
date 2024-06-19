/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:40:15 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:26:38 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = ptr1;
	p2 = ptr2;
	i = 0;
    printf("Starting ft_memcmp with num = %zu\n", num); // Print the initial value of num	
	while (i < num)
	{
        printf("Comparing byte %zu: p1 = %02hhx, p2 = %02hhx\n", i, *p1, *p2); // Print the current byte being compared		
		if (*p1 != *p2)
            printf("Difference found at byte %zu: p1 = %02hhx, p2 = %02hhx, difference = %d\n", i, *p1, *p2, *p1 - *p2);			
			return (*p1 - *p2);
		++p1;
		++p2;
		++i;
	}
    printf("No differences found after %zu bytes\n", num);
	return (0);
}


// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char	*str1;
// 	unsigned char	*str2;

// 	str1 = (unsigned char *)s1;
// 	str2 = (unsigned char *)s2;
// 	while (n--)
// 	{
// 		if (*str1 != *str2)
// 			return (*str1 - *str2);
// 		str1++;
// 		str2++;
// 	}
// 	return (0);
// }

// // int ft_memcmp(const void *s1, const void *s2, size_t n)
// {
//     int         result;
//     const char  *ptr1;
//     const char  *ptr2;
//     ptr1 = (char *)s1;
//     ptr2 = (char *)s2;
//     result = 0;
//     while (n-- > 0)
//     {
//         if (*ptr1 != *ptr2)
//             return (*(unsigned char *)ptr1 - *(unsigned char *)ptr2);
//         ptr1++;
//         ptr2++;
//     }
//     return (0);
// }
// int main()
// {
//     char array1[] = "";
//     char array2[] = "";
//     char array3[] = "Hello";
//     char array4[] = "World";
//     char array5[] = "HelloWorld";
//     char array6[] = "HelloWorlD"; // Different ending
//     char array7[] = "Hello"; // Overlapping memory blocks

//     // Test 1: Empty strings
//     size_t result_ft_memcmp_empty = ft_memcmp(array1, array2, strlen(array1));
//     int result_memcmp_empty = memcmp(array1, array2, strlen(array1));
//     printf("Test 1: Empty strings, ft_memcmp result: %zu, memcmp result: %d\n", result_ft_memcmp_empty, result_memcmp_empty); // Should print 0 for both

//     // Test 2: Strings of different lengths
//     size_t result_ft_memcmp_diff_len = ft_memcmp(array3, array4, strlen(array3));
//     int result_memcmp_diff_len = memcmp(array3, array4, strlen(array3));
//     printf("Test 2: Strings of different lengths, ft_memcmp result: %zu, memcmp result: %d\n", result_ft_memcmp_diff_len, result_memcmp_diff_len); // Should print the difference between the first differing bytes for both

//     // Test 3: Common prefix, different endings
//     size_t result_ft_memcmp_common_prefix = ft_memcmp(array5, array6, strlen(array5));
//     int result_memcmp_common_prefix = memcmp(array5, array6, strlen(array5));
//     printf("Test 3: Common prefix, different endings, ft_memcmp result: %zu, memcmp result: %d\n", result_ft_memcmp_common_prefix, result_memcmp_common_prefix); // Should print the difference between the first differing bytes for both

//     // Test 4: Overlapping memory blocks
//     size_t result_ft_memcmp_overlap = ft_memcmp(array7, array7 + 1, strlen(array7)); // Overlap by 1 byte
//     int result_memcmp_overlap = memcmp(array7, array7 + 1, strlen(array7)); // Overlap by 1 byte
//     printf("Test 4: Overlapping memory blocks, ft_memcmp result: %zu, memcmp result: %d\n", result_ft_memcmp_overlap, result_memcmp_overlap); // Should print the difference between the first differing bytes for both

//     return 0;
// }
