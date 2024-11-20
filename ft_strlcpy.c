/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:49 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 21:02:15 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!dst || !src)
		return (ft_strlen(src));
	if ((ft_strlen(src) + 1) <= size)
		ft_memcpy(dst, src, (ft_strlen(src) + 1));
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (ft_strlen(src));
}

/* int main()
{
	char	src[20] = "qwertyuiop";
	char	dst[20];
	
	ft_strlcpy(dst, src, ft_strlen(src) + 1);
	
	printf("src:_%s_\n", src);
	printf("dst:_%s_\n", dst);
} */