/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:03:22 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/26 16:08:14 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

static void	ft_voidcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	if (start < ft_strlen(s))
	{
		if (ft_strlen(&s[start]) < len)
			len = ft_strlen(&s[start]);
	}
	else
	{
		len = 0;
		start = 0;
	}
	s1 = (char *)malloc_t_bad((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	ft_voidcpy(s1, &s[start], len + 1);
	return (s1);
}
