/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:39:21 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/06 15:53:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb *= neg;
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", atoi("1234"));
	printf("%d", ft_atoi("   ---+--+1234ab567"));
	return (0);
}*/
