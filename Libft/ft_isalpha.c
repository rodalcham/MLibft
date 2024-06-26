/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:03:26 by rchavez           #+#    #+#             */
/*   Updated: 2024/03/08 12:38:05 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c > 'z' || c < 'A' || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}

// #include <unistd.h>
// int main(void)
// {
// 	char c;
// 	c = '6';
// 	if(ft_isalpha(c))
// 		write(1, "y\n", 2);
// 	else
// 		write(1, "n\n", 2);
// }