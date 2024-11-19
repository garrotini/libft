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

void	*ft_calloc(size_t nelm, size_t size)
{
	unsigned char	*buffer;
	size_t			area;

	if (!nelm || !size)
	{
		buffer = malloc(0);
		if (!buffer)
			return (NULL);
		return (buffer);
	}
	area = (nelm * size);
	buffer = malloc(sizeof(char) * area);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, area);
	return ((void *)buffer);
}
