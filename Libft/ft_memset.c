/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:51:01 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:54:16 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char str[] = "Hello World";
// 	char st[] = "Hello World";
// 	int c = 64;
// 	size_t len = 7;
// 	ft_memset(&str[0], c, len);
// 	memset(&st[0], c, len);
// 	printf("%p: %s\n", &str[0], str);
// 	printf("%p: %s\n", &st[0], st);
// }