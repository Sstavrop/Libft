/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:40:19 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:26:46 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	char	*d;
// 	const char	*s;

// 	d = (char *) dest;
// 	s = (const char *) src;
// 	while (n-- > 0)
// 	{
// 		*d++ = *s++;
// 	}
// 	return (dest);
// }
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() 
// {
//     // Allocate memory for destination and source strings
//     char dest[50], src[50];

//     // Initialize source string
//     strcpy(src, "Hello, Malaka!");

//     // Use ft_memcpy to copy src to dest
//     ft_memcpy(dest, src, sizeof(src));
// 	// memcpy(dest, src, sizeof(src));

//     // Print the copied string
//     printf("Copied string: %s\n", dest);

//     return 0;
// }