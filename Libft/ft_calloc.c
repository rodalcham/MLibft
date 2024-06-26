/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:21:31 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/26 16:09:04 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = (void *)malloc_t_bad(count * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, count * size);
	return (res);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     // Test parameters
//     size_t count = 5;
//     size_t size = 10;

//     // Allocate memory using your custom calloc
//     void *my_memory = ft_calloc(count, size);
//     if (!my_memory) {
//         fprintf(stderr, "Error: Custom calloc failed\n");
//         return (1);
//     }

//     // Allocate memory using standard calloc
//     void *std_memory = calloc(count, size);
//     if (!std_memory) {
//         fprintf(stderr, "Error: Standard calloc failed\n");
//         free_t(my_memory);  // Release memory allocated by custom calloc
//         return (1);
//     }

//     // Check if the memory blocks are equal
//     if (memcmp(my_memory, std_memory, count * size) == 0) {
//         printf("Memory blocks are equal.\n");
//     } else {
//         printf("Memory blocks differ.\n");
//     }

//     // Free allocated memory
//     free_t(my_memory);
//     free_t(std_memory);

//     return (0);
// }