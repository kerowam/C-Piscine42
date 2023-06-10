/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:23:45 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/05 23:43:20 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
unsigned int	ft_strlcat(char *des, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (des[i] != 0)
		i++;
	while (src[j] != 0 && j < size)
	{
		des[i + j] = src[j];
		j++;
	}
	des[i + j] = 0;
	return (i + j);
}
/*
int	main(void)
{
	char	s1[15] = "hello";
	char	s2[] = "world";

	printf("%lu\n", strlcat(s1, s2, 3));
	printf("%u\n", ft_strlcat(s1, s2, 3));
	return (0);
}*/
