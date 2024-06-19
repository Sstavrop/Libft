/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:55:08 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 15:05:53 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha (int c)

{
	if (('a' <= c && 'z' >= c))
		return (1);
	else if (('A' <= c && 'Z' >= c))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// // Include your ft_isalpha function here

// int main() {
//     char test_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#$%^&*()_+<>?";
    
//     // Test various characters
//     for (int i = 0; i < sizeof(test_chars)/sizeof(test_chars[0]); i++) {
//         printf("'%c' is an alphabet letter: %s\n", test_chars[i], ft_isalpha(test_chars[i])? "true" : "false");
//     }

//     return 0;
// }