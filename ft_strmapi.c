/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:54:52 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 21:18:50 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!str || !f)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/* char ft_upper(unsigned int i, char s)
{
	
	if (i < 10)
		s -= 32;
	return (s);
}

int	main(void)
{
	char src[] = "abcdef";

	char *dst;
	
	int i = 0;

	while (i++ < (ft_strlen(src) + 1))
		dst = ft_strmapi(src, ft_upper);

	printf("src:_%s_\n", src);
	printf("dst:_%s_\n", dst);
} */