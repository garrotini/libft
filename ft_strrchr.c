/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:11:04 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 15:12:34 by cmanuel-         ###   ########.fr       */
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
