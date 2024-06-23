/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:04:37 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 15:28:30 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sum;
	void	*p;

	sum = count * size;
	p = malloc(sum);
	if (p == NULL)
		return (NULL);
	if (count <= 0 || size <= 0)
		return (malloc(0));
	else
		ft_bzero(p, sum);
	return (p);
}
