/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:07:29 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/26 16:18:20 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

link_t	**get_head(void)
{
	static link_t	*head = NULL;

	return (&head);
}

int	*get_bad(void)
{
	static int	bad = -1;

	return (&bad);
}