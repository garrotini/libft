/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:05:47 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 16:36:22 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (dest);
	if (dest > src)
		while (n--)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* int main()
{
    char src1[10] = "abcdef";
    char src2[10] = "abcdef";
    char *dst1;
    char *dst2;
	
    printf("original_src1     :_%s_\n", src1);

	dst1 = ft_memmove(src1 + 2, src1, ft_strlen(src1) + 1);

    printf("dst1_after_memmove:_%s_\n", dst1);

	printf("src1_after_memmove:_%s_\n\n", src1);

    
    printf("original_src2    :_%s_\n", src2);
	
	// overlapping and crashing
    dst2 = ft_memcpy(src2 + 2, src2, ft_strlen(src2) + 1);

    printf("dst2_after_memcpy:_%s_\n", dst2);

	printf("src2_after_memcpy:_%s_\n", src2);

    return (0);
} */