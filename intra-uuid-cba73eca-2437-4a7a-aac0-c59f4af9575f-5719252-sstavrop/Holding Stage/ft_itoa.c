/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:04:56 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 10:48:47 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_itoa(int value, char *string, int radix)
// {
// 	int	i;

// 	i = 0;
// 	if (i < len)
// 	{
// 		char temp = str[i];
// 		str[i] = str[len - 1];
// 		str[len -1] = temp;
// 		i++;
// 		len --;
// 		reverse (str, len, i, temp);
// 	}
// }


// char* ft_itoa(int value, char* string, int radix) 
// {
//     int i;
//     long num;
//     char sign;

// 	i = 0;
// 	num = value;
// 	sign = '+';
//     if (num < 0)
// 	{
//         sign = '-';
//         num *= -1;
//     }
//     while (num!= 0)
// 	{
//         int remainder = num % radix;
//         string[i++] = (remainder >= 10? 'A' + (remainder - 10) :
//  		'0' + remainder);
//         num /= radix;
//     }

//     if (sign == '-')
// 	{
//         string[i++] = sign;
//     }
//     string[i] = '\0';

//     if (radix > 10) 
// 	{
//         ss_reverse_string(string, 0, i - 1);
//     }

//     return string;
// }

// int main() {
//     char str[50];
//     ft_itoa(12345, str, 16); // Convert 12345 to hexadecimal
//     printf("%s\n", str); // Output: "7B56"
//     return 0;
// }

