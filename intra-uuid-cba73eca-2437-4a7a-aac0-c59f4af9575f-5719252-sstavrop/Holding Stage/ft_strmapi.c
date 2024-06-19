/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstavrop <sstavrop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:47:07 by sstavrop          #+#    #+#             */
/*   Updated: 2024/06/18 14:28:50 by sstavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters s: The string on which to iterate.
// f: The function to apply to each character.
// Return value The string created from the successive applications
// of ’f’.
// Returns NULL if the allocation fails.
// External functs. malloc
// Description Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second. A new
// string is created (using malloc(3)) to collect the
// results from the successive applications of f

// so, whats the first thing that jumps out to you?
// 	that we are making new strings, so malloc should be used.
// 	lmao, i didnt even notice until now that it mentions malloc right there in the description
// you need to go through the entire original string, so strlen would be helpful here. 

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *str;

	if (!s || !f)
		return (0);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char my_function(unsigned int index, char c) 
// {
//     if (islower((int)c)) 
// 	{
//         return toupper((int)c);
//     }
//     return c;
// }

// int main() {
//     const char *original_string = "Hello, World!";
//     char *modified_string_ft = ft_strmapi(original_string, my_function);

//     printf("Original String: %s\n", original_string);
//     printf("Modified String - ft_strmapi: %s\n", modified_string_ft? modified_string_ft : "(null)");

//     // Free allocated memory
//     free(modified_string_ft);

//     return 0;
// }


// char increment_ascii(unsigned int index, char c) 
// {
//     return (char)((int)c + index);
// }

// int main() {
//     const char *original_string = "Hello, World!";
//     char *modified_string_ft = ft_strmapi(original_string, increment_ascii);

//     printf("Original String: %s\n", original_string);
//     printf("Modified String - ft_strmapi: %s\n", modified_string_ft? modified_string_ft : "(null)");

//     // Free allocated memory
//     free(modified_string_ft);

//     return 0;
// }