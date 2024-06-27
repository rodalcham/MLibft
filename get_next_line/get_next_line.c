/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:07:36 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/27 09:51:08 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*str;
	int			chars_read;

	str = NULL;
	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	chars_read = 1;
	if (buffer[0])
		str = ft_join(str, buffer);
	while (chars_read)
	{
		if (search_nl(str))
			return (str);
		chars_read = read(fd, buffer, BUFFER_SIZE);
		if (chars_read == -1)
		{
			if (str)
				free_t(str);
			return (NULL);
		}
		buffer[chars_read] = '\0';
		str = ft_join(str, &buffer[0]);
	}
	return (ft_join(str, &buffer[0]));
}
