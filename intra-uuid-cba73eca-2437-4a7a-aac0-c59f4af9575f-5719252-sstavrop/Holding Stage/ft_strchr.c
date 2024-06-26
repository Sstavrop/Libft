/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:23:26 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/26 14:30:33 by sstavrop         ###   ########.fr       */
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
