/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:10:21 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:29:10 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			sc;
	char			*res;

	i = 0;
	sc = (char) c;
	res = NULL;
	while (s[i])
	{
		if (s[i] == sc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == sc)
		res = (char *) &s[i];
	return (res);
}
