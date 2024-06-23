/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:40:15 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/23 13:02:29 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = ptr1;
	p2 = ptr2;
	i = 0;
	while (i < n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		++p1;
		++p2;
		++i;
	}
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
