/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:24:33 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/18 18:12:09 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * sign);
}

/* int main()
{
	char a[] = "123456789";
	char b[] = "-123456789";
	char c[] = "0";
	char d[] = "5";
	char e[] = "   -5";
	
	printf("orig function:_%d_\n", atoi(a));
	printf("mine function:_%d_\n\n", ft_atoi(a));

	printf("orig function:_%d_\n", atoi(b));
	printf("mine function:_%d_\n\n", ft_atoi(b));
	
    printf("orig function:_%d_\n", atoi(c));
    printf("mine function:_%d_\n\n", ft_atoi(c));

    printf("orig function:_%d_\n", atoi(d));
    printf("mine function:_%d_\n\n", ft_atoi(d));

    printf("orig function:_%d_\n", atoi(e));
    printf("mine function:_%d_\n\n", ft_atoi(e));		

	
} */