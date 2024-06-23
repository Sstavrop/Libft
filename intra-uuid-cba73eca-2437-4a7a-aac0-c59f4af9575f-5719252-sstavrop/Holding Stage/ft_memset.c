/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:26:24 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 15:29:12 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t len)
{
	unsigned char	*ptr_char;

	ptr_char = ptr;
	while (len-- > 0)
		*ptr_char++ = val;
	return (ptr);
}
