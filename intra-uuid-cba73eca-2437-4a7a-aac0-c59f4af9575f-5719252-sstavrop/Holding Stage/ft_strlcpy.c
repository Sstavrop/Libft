/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:53:42 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/23 18:37:15 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
// {
// 	size_t	i;

// 	i = 0;
// 	if (sz == 0)
// 		return (ft_strlen(src));
// 	if (sz > 0)
// 	{
// 		while (src[i] != '\0' && i < (sz - 1))
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		if (i < sz)
// 			dst[i] = '\0';
// 	}
// 	while (src[i] != '\0')
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
    size_t	i;

    i = 0;
    if (sz == 0)
        return (ft_strlen(src));
    if (sz < ft_strlen(src))
        return (ft_strlen(src));
    while (src[i] != '\0' && i < sz - 1)
	{
        dst[i] = src[i];
		i++;
	}
	if (i < sz)
		dst[i] = '\0';
    return (i);
}
// #include <stdio.h>
// #include <string.h>
// #include <strings.h>
// #include <sys/types.h>
// int main()
// {
// 	int i  = 0;
// 	char src[] = "hello !";
// 	char dst1[100];


// 	size_t r1 = ft_strlcpy(dst1, src, 2);
// 	size_t r2 = strlcpy(dst1, src, 2);
// 	printf(" r1%zu\n", r1);
// 	printf(" r2%zu\n", r2);	
// 	return 0;
// }
