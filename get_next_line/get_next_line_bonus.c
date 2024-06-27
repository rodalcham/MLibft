/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:07:36 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/27 09:50:36 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FD_NUM][BUFFER_SIZE + 1];
	char		*str;
	int			chars_read;

	str = NULL;
	if (BUFFER_SIZE < 1 || fd < 0 || fd >= FD_NUM)
		return (NULL);
	chars_read = 1;
	if (buffer[fd][0])
		str = ft_join(str, buffer[fd]);
	while (chars_read)
	{
		if (search_nl(str))
			return (str);
		chars_read = read(fd, buffer[fd], BUFFER_SIZE);
		if (chars_read == -1)
		{
			if (str)
				free_t(str);
			return (NULL);
		}
		buffer[fd][chars_read] = '\0';
		str = ft_join(str, &buffer[fd][0]);
	}
	return (ft_join(str, &buffer[fd][0]));
}
