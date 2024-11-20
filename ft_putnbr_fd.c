/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanuel- <cmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:27:32 by cmanuel-          #+#    #+#             */
/*   Updated: 2024/11/20 16:33:06 by cmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

/* int main()
{
	int a = 123456789;
	int b = -123456789;
	int c = 0;
	int d = 5;
	int e =    -5;
	
	printf("\n%d\n", a);
	ft_putnbr_fd(a, 1);
	
	printf("\n\n%d\n", b);
	ft_putnbr_fd(b, 1);
	
	printf("\n\n%d\n", c);
	ft_putnbr_fd(c, 1);

	printf("\n\n%d\n", d);
	ft_putnbr_fd(d, 1);

	printf("\n\n%d\n", e);
	ft_putnbr_fd(e, 1);
	
	printf("\n\n");

} */