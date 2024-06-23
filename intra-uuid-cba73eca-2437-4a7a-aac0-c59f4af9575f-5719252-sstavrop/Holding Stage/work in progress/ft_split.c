/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:17:29 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/23 13:54:35 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

static	size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static	char	*ft_strdup(const char *s1)
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

static	int	ss_count_segments(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
		if (*s++ == c || *(s - 1) == '\0')
			count++;
	return (count);
}

static	char	**ss_allocate_memory(int count)
{
	char	**result;

	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[count] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**result;

	result = NULL;
	count = ss_count_segments(s, c);
	i = 0;
	result = ss_allocate_memory(count);
	s += count;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			result[i++] = ft_strdup(s - ft_strlen(result[i - 1]));
			if (!result[i - 1])
			{
				free(result);
				result = NULL;
				return (NULL);
			}
		}
		else
			s++;
	}
	return (result);
}

int main(void)
{
    char *input = "Hello, World How are you today?";
    char *delim = " ";
    char **segments = ft_split(input, delim);

    if (segments == NULL)
    {
        printf("ft_split failed\n");
        return 1;
    }

    int i = 0;
    while (segments[i]!= NULL)
    {
        printf("%s\n", segments[i]);
        i++;
    }

    // Free the allocated memory
    for (i = 0; segments[i]!= NULL; i++)
    {
        free(segments[i]);
    }
    free(segments);

    return 0;
}
