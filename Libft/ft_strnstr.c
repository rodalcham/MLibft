/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:51:57 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:55:14 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		x;

	if (!*needle)
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		x = 0;
		while (needle[j] && x == 0)
		{
			if (i + j >= len || needle[j] != haystack[i + j])
				x++;
			j++;
		}
		if (x == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     // Test cases
//     const char *haystack1 = "Hello, world!";
//     const char *needle1 = "world";
//     size_t len1 = strlen(haystack1);

//     const char *haystack2 = "This is a test";
//     const char *needle2 = "is";
//     size_t len2 = strlen(haystack2);

//     const char *haystack3 = "Programming is fun!";
//     const char *needle3 = "python";
//     size_t len3 = strlen(haystack3);

//     // Test case 1
//     char *result1 = ft_strnstr(haystack1, needle1, len1);
//     printf("Test 1: %s\n", result1 ? result1 : "Not found");

//     // Test case 2
//     char *result2 = ft_strnstr(haystack2, needle2, len2);
//     printf("Test 2: %s\n", result2 ? result2 : "Not found");

//     // Test case 3
//     char *result3 = ft_strnstr(haystack3, needle3, len3);
//     printf("Test 3: %s\n", result3 ? result3 : "Not found");

//     return (0);
// }