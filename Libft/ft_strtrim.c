/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:46:41 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/26 16:08:12 by rchavez          ###   ########.fr       */
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

static char	*ft_strtrimcreate(size_t b, size_t e, char const *s1)
{
	char	*str;

	str = (char *)malloc_t_bad(sizeof(char) * (ft_strlen(s1) - b - e + 1));
	if (!str)
		return (NULL);
	ft_voidcpy(str, &s1[b], (ft_strlen(s1) - b - e + 1));
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	b;
	size_t	e;

	i = 0;
	b = 0;
	e = 0;
	if (*s1 && *set)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
		{
			i++;
			b++;
		}
		while (s1[i])
			i++;
		if (i > 0)
			i--;
		while (i > b && ft_strchr(set, s1[i]))
		{
			i--;
			e++;
		}
	}
	return (ft_strtrimcreate(b, e, s1));
}
