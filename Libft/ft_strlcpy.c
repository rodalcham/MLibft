/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:32:00 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:54:51 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (src[a])
	{
		a++;
	}
	if (dstsize == 0)
		return (a);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (a);
}

// #include <stdio.h>
// int main (void)
// {
// 	char src[] = "Hello world";
// 	char dest[100];

// 	int a = ft_strlcpy(&dest[0], &src[0], 100);
// 	printf("%s", dest);
// }