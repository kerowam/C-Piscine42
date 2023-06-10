/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:37:26 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/09 18:32:58 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nbr *= nb;
		power--;
	}
	return (nbr);
}
/*
int	main(void)
{
	printf("%u\n", ft_iterative_power(2, 3));
	return (0);
}*/
