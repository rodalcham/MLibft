/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:42:37 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:55:07 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n && n > 0)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "helo";
// 	char s2[] = "heloo";
// 	char s3[] = "he";
// 	char s4[] = "hflo";
// 	char s5[] = "test\200";
// 	char s6[] = "test\0";
// 	printf("%i, %i, %i, %i, %i, %i\n", ft_strncmp(&s1[0], &s1[0], 10),
// 		ft_strncmp(&s1[0], &s2[0], 10), ft_strncmp(&s1[0], &s3[0], 10),
// 		ft_strncmp(&s1[0], &s4[0], 10), ft_strncmp(&s1[0], &s1[0], 2),
// 		ft_strncmp(&s1[0], &s4[0], 1));
// 	printf("%i\n", ft_strncmp(&s5[0], &s6[0], 6));
// 	printf("%i\n", strncmp(&s5[0], &s6[0], 6));
// }