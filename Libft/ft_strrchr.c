/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:23:05 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/25 14:55:17 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if ((char) c == '\0')
		return ((char *)&s[i]);
	while (i > 0 && s[i - 1] != (char)c)
	{
		i--;
	}
	if (i > 0)
		return ((char *)&s[i - 1]);
	else
		return (NULL);
}

// #include <unistd.h>
// int main (void)
// {
// 	char str[] = "Hello World";
// 	int a = '\0';
// 	char *res = ft_strrchr(&str[0], a);
// 	write(1, res, 1);
// }