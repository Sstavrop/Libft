/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:04:37 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/26 14:33:47 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	if (nmemb <= 0 || size <= 0)
		return (malloc(0));
	sum = nmemb * size;
	p = malloc(sum);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, sum);
	return (p);
}
