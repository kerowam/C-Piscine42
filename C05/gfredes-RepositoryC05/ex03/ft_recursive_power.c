/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:09:50 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/09 18:38:49 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 2)
		nbr *= nb;
	else if (power > 2)
		nbr *= ft_recursive_power(nb, (power - 1));
	return (nbr);
}
/*
int	main(void)
{
	printf("%u\n", ft_recursive_power(2, 3));
	return (0);
}*/
