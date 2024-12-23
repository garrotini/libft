/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:22 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 20:59:42 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;

	dup = ft_calloc(ft_strlen(src) + 1, sizeof(char));
	if (!dup)
		return (NULL);
	return (ft_memcpy(dup, src, ft_strlen(src)));
}

/* int main()
{
	char	src[] = "qwertyuiop";
	char	*dst;
	
	dst = ft_strdup(src);
	
	printf("src:_%s_\n", src);
	printf("dst:_%s_\n", dst);
}
 */