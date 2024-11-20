/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:10:19 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 16:43:08 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == (char)c)
			return ((char *)--s);
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/* int main()
{
	char s[] = "abcd";
	int c = 'c';

	printf("orig str:_%s_\n", s);
	printf("after ft:_%s_\n", ft_strchr(s, c));


	printf("add of str:_%p_\n", s);
	printf("add of chr:_%p_\n", ft_strchr(s, c));
} */