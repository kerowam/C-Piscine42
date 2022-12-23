/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:42:25 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/10 00:46:38 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	n;
	unsigned int	max_nb;

	n = 1;
	max_nb = nb;
	if (nb <= 0 || nb > 46340)
		return (0);
	while (n * n <= max_nb)
	{
		if (n * n == max_nb)
			return (n);
		n++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(10000));
	return (0);
}*/
