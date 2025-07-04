/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:52:24 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/19 19:39:50 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

    if (!count)
        buffer = NULL;
    buffer = malloc(size * count);
    if (buffer == NULL)
    {
        free(buffer);
        return (NULL);
    }
    ft_bzero(buffer, size*count);
	return (buffer);
}
