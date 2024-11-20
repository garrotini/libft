/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:16 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 22:19:54 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s = ft_calloc(end - start + 1, sizeof(char));
	if (!s)
		return (0);
	ft_strlcpy(s, &s1[start], end - start + 1);
	return (s);
}

/* int main()
{
	char s[] = "asasastrimtrimsas";
	char set[] = "as";

	char *dst = ft_strtrim(s, set);

	printf("trimming _%s_\nfrom _%s_\nequals _%s_\n", set, s, dst);
} */