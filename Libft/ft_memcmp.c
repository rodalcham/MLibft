/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:38:02 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:57:30 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		x;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		x = (unsigned char)str1[i] - (unsigned char)str2[i];
		if (x != 0)
			return (x);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "helo";
// 	char s2[] = "heloo";
// 	char s3[] = "he";
// 	char s4[] = "hflo";
// 	printf("%i, %i, %i, %i, %i, %i\n", ft_memcmp(&s1[0], &s1[0], 10),
// 		ft_memcmp(&s1[0], &s2[0], 10), ft_memcmp(&s1[0], &s3[0], 10),
// 		ft_memcmp(&s1[0], &s4[0], 10), ft_memcmp(&s1[0], &s1[0], 2),
// 		ft_memcmp(&s1[0], &s4[0], 1));
// }