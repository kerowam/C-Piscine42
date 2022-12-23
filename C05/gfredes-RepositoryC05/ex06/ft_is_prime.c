/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:12:40 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/09 19:38:41 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	n;

	n = 3;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if ((nb % 2) == 0)
		return (0);
	else
	{	
		while (n < (nb / 2))
		{
			if (nb % n == 0)
				return (0);
			n += 2;
		}
		return (1);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(9));
	return (0);
}*/
