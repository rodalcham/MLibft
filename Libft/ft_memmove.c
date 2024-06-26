/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:51:36 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:54:13 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	a = (char *)dst;
	b = (char *)src;
	if ((dst > src) && (dst - len <= src))
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int main (void)
// {
// 	char str[30] = "";
// 	char src[30] = "AAAAAAAAAA";
// 	ft_memmove(&src[0], &src[0], 10);
// 	printf("%s\n", &src[0]);
// }