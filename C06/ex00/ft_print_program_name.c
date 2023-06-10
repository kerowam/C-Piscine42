/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:08:27 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/08 20:50:10 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	**str)
{
	int	i;

	i = 0;
	while (str[0][i] != 0)
	{
		ft_putchar(str[0][i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putstr(&argv[0]);
	write(1, "\n", 1);
	return (0);
}
