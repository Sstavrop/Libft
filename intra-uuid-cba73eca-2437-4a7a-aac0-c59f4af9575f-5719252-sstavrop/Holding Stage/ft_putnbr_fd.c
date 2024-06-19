/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:24:56 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:27:24 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)

{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			char digit = n + 48;
			write(fd, &digit, 1);
		}
	}
}

// #include <stdio.h>
// #include <limits.h>

// // Assuming ft_putchar_fd is defined elsewhere
// void ft_putchar_fd(char c, int fd);

// void ft_putnbr_fd(int n, int fd);

// int main() {
//     int numbers[] = {-2147483648, -10000000, 0, 10000000, INT_MAX};
//     float floats[] = {0.0f, 1.5f, -1.5f, 0.99999999f, -0.99999999f};

//     printf("Testing Integer Values:\n");
//     for (int i = 0; i < (size_t)sizeof(numbers)/sizeof(numbers[0]); ++i) {
//         ft_putnbr_fd(numbers[i], STDOUT_FILENO);
//         ft_putchar_fd('\n', STDOUT_FILENO);
//     }

//     printf("\nTesting Float Values:\n");
//     for (int i = 0; i < (size_t)sizeof(floats)/sizeof(floats[0]); ++i) {
//         ft_putnbr_fd((int)floats[i], STDOUT_FILENO); // Cast to int for comparison
//         ft_putchar_fd('\n', STDOUT_FILENO);
//     }

//     printf("\nTesting Large Datasets:\n");
//     for (int i = 0; i < 100000; ++i) {
//         ft_putnbr_fd(i, STDOUT_FILENO);
//         if ((i+1) % 10000 == 0) {
//             ft_putchar_fd('\n', STDOUT_FILENO); // Print newline every 10000 iterations
//         }
//     }

//     return 0;
// }
