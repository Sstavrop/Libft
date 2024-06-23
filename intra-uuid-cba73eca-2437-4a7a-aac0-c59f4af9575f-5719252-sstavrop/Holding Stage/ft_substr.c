/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:01 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/23 14:11:22 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substring_length;
	char	*str;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		substring_length = ft_strlen(s + start);
	else
		substring_length = len;
	str = ft_calloc(substring_length + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < substring_length)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
