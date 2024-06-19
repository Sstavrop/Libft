/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:53:42 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 15:07:42 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	i;

	i = 0;
	if (sz == 0)
		return (0);
	if ((src < dst && src + ft_strlen(src) >= dst)
		|| (dst < src && dst + sz > src))
		return (0);
	if (sz > 0)
	{
		while (src[i] != '\0' && i < (sz - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i);
}

// int main()
// {
// 	char src[] = "does this actually work well????";
// 	char dst[100];

// 	ft_strlcpy(dst, src, sizeof(dst));

// 	printf("Original String: %s\n", src);
// 	printf("Copied string: %s\n", dst);
// 	return 0;
// }
