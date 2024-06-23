/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:40:19 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/23 14:36:26 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	if (!dst && !src)
	return (NULL);
	if (d <= s && s < d + n)
	{
		while (i < n)
		{
			d[n - i - 1] = s[n - i - 1];
			i++;
		}
	}
	else while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
