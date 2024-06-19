/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:55:02 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 15:12:04 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	if (d <= s && s < d + n)
	{
		while (i < n)
		{
			d[n - i - 1] = s[n - i - 1];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main() {
//     // Test case 1: No overlap - ft_memmove
//     char dest1_ft[20] = "Before";
//     char src1[] = "world!";
//     size_t n1 = sizeof(src1) - 1; // Adjusted to exclude the null terminator
//     ft_memmove(dest1_ft, src1, n1);
//     printf("Test Case 1: After ft_memmove (No overlap): %s\n", dest1_ft);

//     // Test case 1: No overlap - memmove
//     char dest1_mem[20] = "Before";
//     memmove(dest1_mem, src1, n1); // Using memmove instead of ft_memmove
//     printf("Test Case 1: After memmove (No overlap): %s\n", dest1_mem);

//     // Test case 2: Overlap from the beginning - ft_memmove
//     char dest2_ft[20] = "Before";
//     char src2[] = "world!";
//     size_t n2 = sizeof(src2) - 1; // Adjusted to exclude the null terminator
//     ft_memmove(dest2_ft, src2, n2);
//     printf("Test Case 2: After ft_memmove (Overlap from the beginning): %s\n", dest2_ft);

//     // Test case 2: Overlap from the beginning - memmove
//     char dest2_mem[20] = "Before";
//     memmove(dest2_mem, src2, n2); // Using memmove instead of ft_memmove
//     printf("Test Case 2: After memmove (Overlap from the beginning): %s\n", dest2_mem);

//     // Test case 3: Overlap in the middle - ft_memmove
//     char dest3_ft[20] = "Before";
//     char src3[] = "world!";
//     size_t n3 = sizeof(src3) - 1; // Adjusted to exclude the null terminator
//     ft_memmove(dest3_ft, src3, n3);
//     printf("Test Case 3: After ft_memmove (Overlap in the middle): %s\n", dest3_ft);

//     // Test case 3: Overlap in the middle - memmove
//     char dest3_mem[20] = "Before";
//     memmove(dest3_mem, src3, n3); // Using memmove instead of ft_memmove
//     printf("Test Case 3: After memmove (Overlap in the middle): %s\n", dest3_mem);

//     return 0;
// }
