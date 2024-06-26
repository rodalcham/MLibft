/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:13:28 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:56:58 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	if (c == '\0' && str[i] == '\0' && i < n)
		return ((void *)&str[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <unistd.h>
// int main (void)
// {
// 	// char str[] = "Hello World";
// 	// int a = 'e';
// 	// char *res = (char *) ft_memchr(&str[0], a, 11);
// 	// write(1, res, 1);

// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	char *p = (char *)ft_memchr(s, 2, 3);
// 	char *r = (char *)memchr(s, 2, 3);
// 	printf("S: %p\nFT:%p x STD:%p\n",s, p, r);
// }