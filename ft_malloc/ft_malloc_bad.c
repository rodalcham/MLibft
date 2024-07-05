/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_bad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:25:20 by rchavez           #+#    #+#             */
/*   Updated: 2024/07/05 11:30:40 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void	fail_t(int nbr)
{
	*get_bad() = nbr;
}

void	*malloc_t_bad(size_t size)
{
	t_link	*new;

	if (*get_bad() == 0)
	{
		*get_bad() = -1;
		return (NULL);
	}
	new = (t_link *)malloc(sizeof(t_link));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->data = malloc(size);
	if (!new->data)
		return (free(new), NULL);
	link_append(new);
	if (*get_bad() >= 0)
		*get_bad() = *get_bad() - 1;
	return (new->data);
}
