/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:59:52 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/24 11:13:05 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int ss_skip_whitespace(const char *str)
// {
// 	while (*str <= ' ')
// 		str++;
// 	return (str);
// }

// static int ss_handle_sign(const char *str)
// {
// 	if (*str == '-')
// 		return -1;
// 	else if (*str == '+') 
// 		return 1;
//     return 1;
// }

// static long long ss_convert_digits(const char *str)
// {
// 	long long base;
// 	const char *start;
// 	start = str;
// 	base = 0;
// }

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	res;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (sign * res);
}
