/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:30:43 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:52:01 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main() 

// {
//     char test_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#$%^&*()_+<>?";
    
//     // Test various characters
//     for (int i = 0; i < sizeof(test_chars)/sizeof(test_chars[0]); i++)
// 	{
//         printf("\033[1;31m%c Mine: %s\n\033[0m", test_chars[i], ft_isprint(test_chars[i])? "true" : "false");
// 		printf("\033[32m%c Standard: %s\n\033[0m", test_chars[i], isprint(test_chars[i])? "true" : "false");
// 	}
//     return 0;
// }