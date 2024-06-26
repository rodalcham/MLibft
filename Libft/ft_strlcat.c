/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:57:54 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:54:48 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	if (dstsize == 0)
		dstsize++;
	while (i + j < dstsize - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j > 0)
		dst[i + j] = '\0';
	while (src[j])
	{
		j++;
	}
	return (i + j);
}

// #include <stdio.h>
// int main (void)
// {
// 	char src[] = "world";
// 	char dst[100] = "Hello ";

// 	size_t n = ft_strlcat(&dst[0], &src[0], 100);
// 	printf("%s, l: %lu\n", dst, n);
// }