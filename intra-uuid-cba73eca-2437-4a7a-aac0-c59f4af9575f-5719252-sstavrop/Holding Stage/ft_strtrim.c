/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:08:54 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/19 15:08:56 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// static void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*d;
// 	char	*s;

// 	i = 0;
// 	d = (char *) dest;
// 	s = (char *) src;
// 	while (i < n)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	return (dest);
// }

static int	ss_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (start < len && ss_is_in_set(s1[start], set))
		start++;
	end = len -1;
	while (end > start && ss_is_in_set(s1[end], set))
		end--;
	trimmed = malloc(end - start + 2);
	if (end < start)
	{
		free(trimmed);
		return (NULL);
	}
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}

// int main(void)
// {
//     // Test case 1: Basic trimming
//     char str1[] = "   hello world   ";
//     char set1[] = " ";
//     char *trimmed1 = ft_strtrim(str1, set1);
//     printf("Original: %s\nTrimmed: %s\n", str1, trimmed1? trimmed1 : "(null)");
//     free(trimmed1);

//     // Test case 2: String with only characters in the set
//     char str2[] = "   ";
//     char set2[] = " ";
//     char *trimmed2 = ft_strtrim(str2, set2);
//     printf("Original: %s\nTrimmed: %s\n", str2, trimmed2? trimmed2 : "(null)");
//     free(trimmed2);

//     // Test case 3: Empty string
//     char str3[] = "";
//     char set3[] = "a";
//     char *trimmed3 = ft_strtrim(str3, set3);
//     printf("Original: %s\nTrimmed: %s\n", str3, trimmed3? trimmed3 : "(null)");
//     free(trimmed3);

//     // Test case 4: String with characters in the set at both ends
//     char str4[] = ";;;socrates;;;";
//     char set4[] = ";";
//     char *trimmed4 = ft_strtrim(str4, set4);
//     printf("Original: %s\nTrimmed: %s\n", str4, trimmed4? trimmed4 : "(null)");
//     free(trimmed4);

//     // Test case 5: String with characters in the set throughout
//     char str5[] = ".Chris.is.a coding.scion.";
//     char set5[] = ".";
//     char *trimmed5 = ft_strtrim(str5, set5);
//     printf("Original: %s\nTrimmed: %s\n", str5, trimmed5? trimmed5 : "(null)");
//     free(trimmed5);

//     return 0;
// }
