/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:41:18 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:40:03 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

{
	if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
		return (1);
	else if (('0' <= c && '9' >= c))
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
//         printf("\033[1;31m%c Mine: %s\n\033[0m", test_chars[i], ft_isalnum(test_chars[i])? "true" : "false");
// 		printf("\033[32m%c Standard: %s\n\033[0m", test_chars[i], isalnum(test_chars[i])? "true" : "false");
// 	}
//     return 0;
// }