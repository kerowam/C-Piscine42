/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:31:30 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/07 15:51:38 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc > 1)
	{
		c = 1;
		while (c < argc)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{	
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
