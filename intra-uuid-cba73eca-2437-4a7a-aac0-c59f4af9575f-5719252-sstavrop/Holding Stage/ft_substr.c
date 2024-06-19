/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:01 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:29:26 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

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

// #include <stdio.h>

// int main(void) 
// {
//     const char *original_string = "Hello, World!";
//     unsigned int start = 7;
//     size_t len = 5;

//     // Extract a substring from the original string
//     char *substring = ft_substr(original_string, start, len);

//     // Print the original string
//     printf("Original String: %s\n", original_string);

//     // Print the extracted substring
//     if (substring!= NULL) {
//         printf("Extracted Substring: %s\n", substring);
//         free(substring); // Free the allocated memory
//     } else {
//         printf("Failed to extract substring.\n");
//     }

//     return 0;
// }
