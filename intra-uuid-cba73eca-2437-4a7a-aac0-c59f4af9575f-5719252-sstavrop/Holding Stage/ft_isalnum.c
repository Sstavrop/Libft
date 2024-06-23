/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:41:18 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 15:27:08 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

{
	if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
		return (1);
	else if (('0' <= c && '9' >= c))
		return (1);
	else
		return (0);
}
