/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:47:13 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/09 20:28:23 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 1)
	{
		nb--;
		nbr *= nb;
	}
	return (nbr);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}*/
