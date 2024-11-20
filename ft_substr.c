/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:21:54 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 22:27:09 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (start >= ft_strlen(s))
	{
		dst = ft_calloc(1, sizeof(char));
		if (!dst)
			return (NULL);
		return (dst);
	}
	s = (s + start);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	dst = ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s, len + 1);
	return (dst);
}

/* int main()
{
	char s[] = "abcABCabc";

	char *d;

	d = ft_substr(s, 3, 3);

	printf("from _%s_\nresult:_%s_\n", s, d);
} */