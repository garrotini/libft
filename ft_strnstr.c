/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:11:01 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 21:24:54 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(*little))
		return ((char *)big);
	while (*(big + i) && i < n)
	{
		while (*(big + i + j) == *(little + j) && *(little + j) && i + j < n)
			j++;
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		i++;
		j = 0;
	}
	return (0);
}

/* int main()
{
	char big[] = "abcdef";
	char little[] = "cd";
	char *result;

	result = ft_strnstr(big, little, ft_strlen(big) + 1);
	
	printf("_%s_ is searched in _%s_\n and found in _%s_\n", little, big,
			result);
	
} */