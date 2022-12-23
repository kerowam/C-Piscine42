/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:03:28 by gfredes-          #+#    #+#             */
/*   Updated: 2022/10/24 22:06:49 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{		
				ft_putchar(c + 48);
				ft_putchar(d + 48);
				ft_putchar(u + 48);
				if (c == 7 && d == 8 && u == 9)
					break ;
				write (1, ", ", 2);
				++u;
			}
			++d;
		}
		++c;
	}
}
