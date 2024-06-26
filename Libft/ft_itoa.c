/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:44:19 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/26 16:08:04 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

static int	ft_numlen(int n)
{
	int	l;

	l = 1;
	if (n < 0)
		l++;
	while (n / 10)
	{
		l++;
		n /= 10;
	}
	return (l);
}

static void	ft_numrev(char *str)
{
	int		i;
	int		l;
	char	c;

	i = 0;
	l = ft_strlen(str);
	if (str[0] == '-')
	{
		i++;
		l++;
	}
	while (i < l / 2)
	{
		c = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = c;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int			l;
	int			i;
	char		*str;
	long int	number;

	i = 0;
	l = ft_numlen(n);
	number = (long int) n;
	str = (char *) malloc_t_bad(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	if (number < 0)
	{
		str[i++] = '-';
		number *= -1;
		l--;
	}
	while (l--)
	{
		str[i++] = number % 10 + '0';
		number /= 10;
	}
	str[i] = '\0';
	ft_numrev(str);
	return (str);
}
