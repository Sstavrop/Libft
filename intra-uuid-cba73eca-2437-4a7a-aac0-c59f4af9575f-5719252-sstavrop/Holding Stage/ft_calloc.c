/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:04:37 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 15:30:31 by sstavrop         ###   ########.fr       */
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



// int main(void)
// {
//     // Using custom ft_calloc
//     void* ptr_custom = ft_calloc(10, sizeof(int));
//     if (ptr_custom == NULL)
//     {
//         printf("Custom ft_calloc memory allocation failed\n");
//         return 1;
//     }

//     int* arr_custom = (int*)ptr_custom;
//     for (int i = 0; i < 10; ++i)
//     {
//         printf("Custom: %d ", arr_custom[i]);
//     }
//     printf("\n");

//     // Using standard calloc
//     void* ptr_std = calloc(10, sizeof(int));
//     if (ptr_std == NULL)
//     {
//         printf("Standard calloc memory allocation failed\n");
//         return 1;
//     }

//     int* arr_std = (int*)ptr_std;
//     for (int i = 0; i < 10; ++i)
//     {
//         printf("Standard: %d ", arr_std[i]);
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(ptr_custom);
//     free(ptr_std);

//     return 0; // Success
// }