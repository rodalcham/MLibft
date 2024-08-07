/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:23:53 by rchavez           #+#    #+#             */
/*   Updated: 2024/07/05 11:27:51 by rchavez          ###   ########.fr       */
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

static size_t	ft_countwords(char const *s, char c)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	if (*s)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			x++;
		i++;
	}
	if (*s && s[i] == '\0' && s[i - 1] != c)
		x++;
	return (x);
}

static size_t	ft_xlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**ft_splitfree(char **ret, size_t i)
{
	while (i > 0)
	{
		free_t(ret[i - 1]);
		i--;
	}
	free_t(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	**ret;

	i = 0;
	j = 0;
	count = ft_countwords(s, c);
	ret = (char **)malloc_t_bad(sizeof(char *) * (count + 1));
	if (!ret)
		return (NULL);
	while (i < count)
	{
		while (s[j] && s[j] == c)
			j++;
		ret[i] = (char *)malloc_t_bad(sizeof(char) * (ft_xlen(&s[j], c) + 1));
		if (!ret[i])
			return (ft_splitfree(ret, i));
		ft_voidcpy(ret[i], &s[j], (ft_xlen(&s[j], c) + 1));
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "        hello!";
// 	printf("%lu\n", ft_countwords(s, ' '));
// }