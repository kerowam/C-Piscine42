/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:43:50 by gfredes-          #+#    #+#             */
/*   Updated: 2022/10/25 17:50:43 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar(nb1 / 10 + '0');
			ft_putchar(nb1 % 10 + '0');
			write (1, " ", 1);
			ft_putchar(nb2 / 10 + '0');
			ft_putchar(nb2 % 10 + '0');
			if (nb1 == 98 && nb2 == 99)
				break ;
			write (1, ", ", 2);
			++nb2;
		}
		++nb1;
	}
}
