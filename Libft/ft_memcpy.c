/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:29:35 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:56:45 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	a = (char *)dst;
	b = (char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main (void)
// {
// 	char str[100] = "Learning is fun";
// 	char src[] = "Olleh";
// 	ft_memcpy(&str[8], &str[0], 15);
// 	printf("%s\n", &str[0]);
// }