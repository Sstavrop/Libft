/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:14:40 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 15:19:32 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>

// int main() 
// {
//     char test_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@#$%^&*()";
//     // Test lowercase letters
//     for (int i = 0; i < sizeof(test_chars)/sizeof(test_chars[0]); i++) {
//         if (test_chars[i] >= 'a' && test_chars[i] <= 'z') {
//             printf("Original: '%c', Converted: '%c'\n", test_chars[i], ft_toupper((int)test_chars[i]));
//         }
//     }

//     // Test uppercase letters
//     for (int i = 0; i < sizeof(test_chars)/sizeof(test_chars[0]); i++) {
//         if (test_chars[i] >= 'A' && test_chars[i] <= 'Z') {
//             printf("Original: '%c', Converted: '%c'\n", test_chars[i], ft_toupper((int)test_chars[i]));
//         }
//     }

//     // Test non-alphabetic characters
//     for (int i = 0; i < sizeof(test_chars)/sizeof(test_chars[0]); i++) {
//         if (!((test_chars[i] >= 'a' && test_chars[i] <= 'z') || (test_chars[i] >= 'A' && test_chars[i] <= 'Z'))) {
//             printf("Original: '%c', Converted: '%c'\n", test_chars[i], ft_toupper((int)test_chars[i]));
//         }
//     }

//     return 0;
// }
