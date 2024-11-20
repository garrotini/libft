/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:05:44 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 15:31:44 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dst;
	if (!src && !dst)
		return (dst);
	while (n--)
		*tmp++ = *(unsigned char *)src++;
	return (dst);
}

/* int main()
{
	char src[] = "test one";
    char dst[10];
    ft_memcpy(dst, src, ft_strlen(src)+1);
    printf("SRC:_%s_\n", src);
    printf("DST:_%s_\n", dst);	
} */
