/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:09:43 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 16:21:17 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int main()
{
	char a[10] = "aaaa";

	printf("orig str :_%s_\n", a);
	printf("address a:_%p_\n", &a);

	ft_bzero(a, ft_strlen(a));
	
	printf("aft bzero:_%s_\n", a);
	printf("address a:_%p_\n", &a);	
} */