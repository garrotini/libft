/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:53:09 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 18:40:41 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, (ft_strlen(s1) + ft_strlen(s2)));
	ft_strlcat(str, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (str);
}

/* int main()
{
	char str1[30] = "avenida da ";
	char str2[] = "republica";

	char s1[30] = "avenida da ";
	char s2[] = "liberdade";

	printf("test 1 function:_%s_\n", ft_strjoin(str1, str2));	

	printf("test 2 function:_%s_\n", ft_strjoin(s1, s2));	
} */