/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:17:17 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/26 16:08:10 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	p = (char *) malloc_t_bad((i + j + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (j + 1 >= 1)
	{
		p[i + j] = s2[j];
		j--;
	}
	while (i + 1 > 1)
	{
		p[i - 1] = s1[i - 1];
		i--;
	}
	return (p);
}
