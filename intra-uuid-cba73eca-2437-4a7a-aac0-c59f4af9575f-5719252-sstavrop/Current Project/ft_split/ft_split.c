/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:17:29 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 13:58:44 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

thoughts so far:
-words usually end with a ' ' or a .' ', so everything that is a letter or a . followed,
	by a space could be interpreted as a word...
-a sentence could be thought of as an array of strings, with each word being its own string.

/* shit to do to make this work:
	1) make an array that is capable to hold all the words in s.
	2) loop over the string to find the first word.
	3) find the end of the word.
		3a) copy the word at the first free index in the words array.
	4) return the array of words. 
	5) think of whatever other functions you will need to make it work.
		5a) Probably a lot. 
*/
#include <stdlib.h>

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

char	**ft_split(const char *s, char c)
{
	
}