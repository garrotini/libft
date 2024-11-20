/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:11:04 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 21:29:55 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	while (*s)
	{
		if (*(char *)s == (char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (char)c)
		str = (char *)s;
	return (str);
}

/* int main()
{
	char s[] = "ababababanana";
	int c = 'b';
	
	char *dst;
	dst = ft_strrchr(s, c);

	printf("from _%s_\nwe are searching _%c_\nand result is _%s_\n", s, c, dst);
} */