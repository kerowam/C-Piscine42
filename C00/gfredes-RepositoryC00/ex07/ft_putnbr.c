/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:55:58 by gfredes-          #+#    #+#             */
/*   Updated: 2022/10/26 18:34:08 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_divorprint(int nb)
{
	if (nb >= 10)
	{
		nb = nb / 10;
		ft_divorprint(nb);
		ft_putchar(nb % 10 + '0');
	}
}	

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = nb * -1;
	}
	ft_divorprint(nb);
	ft_putchar(nb % 10 + '0');
}
