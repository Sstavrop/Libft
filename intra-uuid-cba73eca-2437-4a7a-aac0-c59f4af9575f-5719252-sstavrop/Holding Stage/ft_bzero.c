/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:07:21 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:25:12 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

// int	main()
// {
//     // Allocate a buffer of 20 characters
//     char buffer[20] = "HelloWorld!";
//     // Use ft_bzero to set the first 5 characters to zero
//     // ft_bzero(buffer, 5);
// 	bzero(buffer,1);
//     // Print the modified buffer
//     printf("Modified Buffer: %s\n", buffer);
//     return (0);
// }

// int main(void) {
//     char str1[100] = "Bears > Wolves";
//     char str2[100] = "You should not be here.";

//     printf("Original strings:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);

//     // Test ft_bzero
//     ft_bzero(str1, 10);  // Zero out the first 20 bytes of str1

//     printf("\nAfter ft_bzero(str1, 20):\n");
//     printf("str1: %s\n", str1);

//     // Test real bzero
//     bzero(str2, 20);  // Zero out the first 20 bytes of str2 using real bzero

//     printf("\nAfter bzero(str2, 20):\n");
//     printf("str2: %s\n", str2);

//     return (0);
// }
