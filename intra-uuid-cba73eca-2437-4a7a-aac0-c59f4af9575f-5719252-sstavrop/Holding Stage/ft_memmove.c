/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:55:02 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/23 15:26:18 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char		*d;
	unsigned char		*s;
	
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (d >= s)
	{
		while (n--)
			d[n] = s[n];
	}
	else 
	{
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
