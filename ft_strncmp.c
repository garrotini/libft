/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:56 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 16:01:40 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && (*s1 == *s2) && n--)
	{
		s1++;
		s2++;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
    char s1[] = "abc";
    char s2[] = "abd";

    size_t n = 3;

    printf("%i\n", strncmp(s1, s2, n));
    printf("%i\n", ft_strncmp(s1, s2, n));
} */