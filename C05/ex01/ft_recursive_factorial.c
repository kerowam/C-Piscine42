/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:33:55 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/10 00:53:08 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	nbr;

	nbr = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb >= 1)
	{
		nbr *= (ft_recursive_factorial(nb - 1));
	}
	return (nbr);
}
/*
int	main(void)
{
	printf("%u\n", ft_recursive_factorial(5));
	return (0);
}*/
