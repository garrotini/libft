/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:05:47 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 16:17:43 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)(s + n) = (unsigned char)c;
	return (s);
}

/* int main()
{
	char a[] = "aaaa";
	
	printf("orig str:_%s_\n", a);
	
	printf("after ft:_%s_\n", (char *)ft_memset(a, 'b', 2));
} */