/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:04:38 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:54:25 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

static int	ft_pow(int n, int p)
{
	int	res;

	res = 1;
	while (p > 0)
	{
		res *= n;
		p--;
	}
	return (res);
}

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

static int	ft_izero(long int n, int len)
{
	return (n / ft_pow(10, len - 1));
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	int			i;
	char		a;

	nb = (long int) n;
	i = ft_numlen(n);
	if (n < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
		i--;
	}
	while (i)
	{
		a = ft_izero(nb, i) + '0';
		nb -= ft_izero(nb, i) * ft_pow(10, i - 1);
		ft_putchar_fd(a, fd);
		i--;
	}
}
