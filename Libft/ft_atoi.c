/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:45:46 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:53:11 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	int			x;
	long int	min;

	i = 0;
	x = 0;
	min = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			min++;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		x *= 10;
		x += str[i] - '0';
		i++;
	}
	if (min > 0)
		x *= -1;
	return (x);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char str[] = "    \f\v\n    -2147483648sddd";
// 	printf("%i\n", ft_atoi(&str[0]));
// }