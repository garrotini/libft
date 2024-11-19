/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:14:43 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 18:11:55 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long n)
{
	int	ndigit;

	ndigit = 0;
	if (n < 0)
	{
		ndigit++;
		n *= -1;
	}
	while (n > 9)
	{
		ndigit++;
		n = n / 10;
	}
	ndigit++;
	return (ndigit);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		ndigit;
	long	nb;

	nb = n;
	ndigit = count_digits(nb);
	str = ft_calloc((ndigit + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
	}
	i = ndigit - 1;
	while (nb > 9)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = nb + '0';
	return (str);
}

/* int main()
{
	int a = 123456789;
	int b = -123456789;
	int c = 0;
	int d = 5;
	int e =    -5;
	
	printf("expected int :_%d_\n", a);
	printf("mine function:_%s_\n\n", ft_itoa(a));

	printf("expected int :_%d_\n", b);
	printf("mine function:_%s_\n\n", ft_itoa(b));
	
	printf("expected int :_%d_\n", c);
    printf("mine function:_%s_\n\n", ft_itoa(c));

	printf("expected int :_%d_\n", d);
    printf("mine function:_%s_\n\n", ft_itoa(d));

	printf("expected int :_%d_\n", e);
    printf("mine function:_%s_\n\n", ft_itoa(e));		
} */