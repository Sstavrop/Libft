/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:23:26 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:27:45 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			sc;

	i = 0;
	sc = (char) c;
	while (s[i])
	{
		if (s[i] == sc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == sc)
		return ((char *) &s[i]);
	return (NULL);
}

// int main(void) {
//     // Test 1: Searching for 'l' in "hello"
//     char *standard_result1 = strchr("hello", 'l');
//     char *custom_result1 = ft_strchr("hello", 'l');
//     printf("Standard strchr - Test 1: %p\n", (void *)standard_result1);
//     printf("Custom ft_strchr - Test 1: %p\n", (void *)custom_result1);
//     printf("\n");

//     // Test 2: Searching for 'z' in "hello"
//     char *standard_result2 = strchr("hello", 'z');
//     char *custom_result2 = ft_strchr("hello", 'z');
//     printf("Standard strchr - Test 2: %p\n", (void *)standard_result2);
//     printf("Custom ft_strchr - Test 2: %p\n", (void *)custom_result2);
//     printf("\n");

//     // Test 3: Searching for 'h' in "hello"
//     char *standard_result3 = strchr("hello", 'h');
//     char *custom_result3 = ft_strchr("hello", 'h');
//     printf("Standard strchr - Test 3: %p\n", (void *)standard_result3);
//     printf("Custom ft_strchr - Test 3: %p\n", (void *)custom_result3);
//     printf("\n");

//     // Test 4: Searching for 'x' in "hello"
//     char *standard_result4 = strchr("hello", 'x');
//     char *custom_result4 = ft_strchr("hello", 'x');
//     printf("Standard strchr - Test 4: %p\n", (void *)standard_result4);
//     printf("Custom ft_strchr - Test 4: %p\n", (void *)custom_result4);
//     printf("\n");

//     return 0;
// 
