/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:55:54 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:26:06 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*i;

	i = s;
	while (n--)
	{
		if (*i == c)
			return ((void *)i);
		i++;
	}
	return (NULL);
}

// int main() 
// {
//     // Detailed comparison and benchmarking
//     const char str_test[] = "This is a test string.";

//     // Compare results
//     char *ft_result = ft_memchr(str_test, 't', sizeof(str_test));
//     char *std_result = memchr(str_test, 't', sizeof(str_test));

//     printf("Search for 't':\n");
//     printf("ft_memchr: %p, memchr: %p\n", ft_result, std_result);

//     // Benchmark
//     clock_t start, end;
//     double duration;
//     int num_iterations = 1000000;

//     start = clock();
//     for (int i = 0; i < num_iterations; i++) {
//         ft_memchr(str_test, 't', sizeof(str_test));
//     }
//     end = clock();

//     duration = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("\nft_memchr benchmark (%d iterations):\nTime taken: %.6f seconds\n", num_iterations, duration);

//     start = clock();
//     for (int i = 0; i < num_iterations; i++) {
//         (void)memchr(str_test, 't', sizeof(str_test));
//     }
//     end = clock();

//     duration = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("memchr benchmark (%d iterations):\nTime taken: %.6f seconds\n", num_iterations, duration);

//     return 0;
// }

// int main() {
//     // Testing edge cases and comparing with standard memchr
//     const char str_empty[] = "";
//     const char str_null_char[] = "\0";
//     const char str_large_search[] = "This is a very long string that should take a while to search through.";
//     const char str_no_match[] = "No match here";
//     const char str_beyond_end[] = "End of string";

//     // Test with empty string
//     char *empty_result_ft = ft_memchr(str_empty, 'X', sizeof(str_empty));
//     char *empty_result_std = memchr(str_empty, 'X', sizeof(str_empty));
//     printf("Empty string: ft_memchr=%p, memchr=%p\n", empty_result_ft, empty_result_std);

//     // Test with null character
//     char *null_char_result_ft = ft_memchr(str_null_char, '\0', sizeof(str_null_char));
//     char *null_char_result_std = memchr(str_null_char, '\0', sizeof(str_null_char));
//     printf("Null character: ft_memchr=%p, memchr=%p\n", null_char_result_ft, null_char_result_std);

//     // Test with large number of bytes
//     char *large_search_result_ft = ft_memchr(str_large_search, 'X', sizeof(str_large_search));
//     char *large_search_result_std = memchr(str_large_search, 'X', sizeof(str_large_search));
//     printf("Large search: ft_memchr=%p, memchr=%p\n", large_search_result_ft, large_search_result_std);

//     // Test with nonexistent character
//     char *no_match_result_ft = ft_memchr(str_no_match, 'Y', sizeof(str_no_match));
//     char *no_match_result_std = memchr(str_no_match, 'Y', sizeof(str_no_match));
//     printf("Nonexistent character: ft_memchr=%p, memchr=%p\n", no_match_result_ft, no_match_result_std);

//     // Test beyond the end of the string
//     char *beyond_end_result_ft = ft_memchr(str_beyond_end, 'Z', sizeof(str_beyond_end));
//     char *beyond_end_result_std = memchr(str_beyond_end, 'Z', sizeof(str_beyond_end));
//     printf("Beyond end of string: ft_memchr=%p, memchr=%p\n", beyond_end_result_ft, beyond_end_result_std);

//     return 0;
// }