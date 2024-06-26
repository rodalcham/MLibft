/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:49:10 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/25 14:54:36 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (char) c)
	{
		str++;
	}
	if (*str || !(char)c)
		return (str);
	else
		return (NULL);
}

// #include <unistd.h>
// int main (void)
// {
// 	char str[] = "Hello World";
// 	int a = '\0';
// 	char *res = ft_strchr(&str[0], a);
// 	write(1, res, 1);
// }