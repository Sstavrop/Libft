/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:26:24 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:27:05 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t len)
{
	unsigned char	*ptr_char;

	ptr_char = ptr;
	while (len-- > 0)
		*ptr_char++ = val;
	return (ptr);
}

// int main() {
//     // Allocate a block of memory of size 10 bytes
//     unsigned char *block = malloc(10);
//     if (!block) {
//         perror("Memory allocation failed");
//         return 1; // Exit with error code 1
//     }

//     // Use ft_memset to fill the allocated memory with the value 42
//     ft_memset(block, 42, 10);

//     // Use memset to fill the same memory block with the value 42
//     memset(block, 42, 10);

//     // Print the contents of the memory block to verify both functions work similarly
//     printf("Contents of the memory block after ft_memset:\n");
//     for (size_t i = 0; i < 10; ++i) {
//         printf("%02X ", block[i]);
//     }
//     printf("\n");

//     // Re-print the contents of the memory block after using memset to ensure it remains unchanged
//     printf("Contents of the memory block after memset:\n");
//     for (size_t i = 0; i < 10; ++i) {
//         printf("%02X ", block[i]);
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(block);

//     return 0; // Success
// }

