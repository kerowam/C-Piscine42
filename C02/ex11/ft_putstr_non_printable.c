/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:04:26 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/03 15:37:26 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_non_printable(char str)
{
	char	d;
	char	m;

	if (str < 0)
		str += 256;
	d = str / 16 + 48;
	m = str % 16;
	if (m > 9)
		m += 87;
	else
		m += 48;
	write(1, "\\", 1);
	write(1, &d, 1);
	write(1, &m, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;

	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			ft_is_non_printable(*str);
		}
		else
		{
			c = *str;
			write(1, &c, 1);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	*ej;

	ej = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(ej);
}*/
