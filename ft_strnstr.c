/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:11:01 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/12 18:17:18 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(*little))
		return ((char *)big);
	while (*(big + i) && i < n)
	{
		while (*(big + i + j) == *(little + j) && *(little + j) && i + j < n)
			j++;
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		i++;
		j = 0;
	}
	return (0);
}
