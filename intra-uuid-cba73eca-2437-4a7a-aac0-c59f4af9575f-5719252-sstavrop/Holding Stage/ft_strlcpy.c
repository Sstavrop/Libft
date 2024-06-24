/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:53:42 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/24 10:41:59 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	i;

	i = 0;
	if (sz == 0)
		return (ft_strlen(src));
	if (sz > 0)
	{
		while (src[i] != '\0' && i < (sz - 1))
		{
			dst[i] = src[i];
			i++;
		}
		if (i < sz)
			dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
