/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:30:37 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 15:31:30 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*total;
	int		i;
	int		j;

	total = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char));
	i = 0;
	j = 0;
	if (!total)
		return (NULL);
	while (s1[i])
		total[j++] = s1[i++];
	i = 0;
	while (s2[i])
		total[j++] = s2[i];
	total[j] = 0;
	return (total);
}
