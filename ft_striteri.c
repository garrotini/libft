/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:38 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 19:20:20 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

/* void ft_upper(unsigned int i, char *s)
{
	if (i < 10)
		*s -= 32;
}

int main()
{
	char s[] = "aaa";

	ft_striteri(s, ft_upper);

	printf("%s\n", s);
} */