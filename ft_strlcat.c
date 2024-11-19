/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:27 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 18:38:09 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/* int main()
{
	int n = 30; 
	
	char str1[30] = "avenida da ";
	char str2[] = "republica";

	char s1[30] = "avenida da ";
	char s2[] = "liberdade";

	ft_strlcat(str1, str2, n);
	printf("test 1 function:_%s_\n", str1);	

	ft_strlcat(s1, s2, n);
	printf("test 2 function:_%s_\n", s1);	

} */