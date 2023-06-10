/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:57:19 by gfredes-          #+#    #+#             */
/*   Updated: 2022/10/27 20:30:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	if (number >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(35);
	ft_is_negative(-42);
}
*/
