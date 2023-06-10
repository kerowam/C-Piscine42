/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:41:15 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/10 13:26:11 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if ((nb % 2) == 0)
		nb += 1;
	else if (ft_is_prime(nb))
		return (nb);
	while (!(ft_is_prime(nb)))
	{
		nb += 2;
		if (ft_is_prime(nb))
			return (nb);
	}
	return (nb);
}
/*
int main(void)
{
	printf("%d\n", ft_find_next_prime(6));
	return (0);
}*/
