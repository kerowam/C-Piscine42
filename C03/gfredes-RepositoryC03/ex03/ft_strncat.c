/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:57:20 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/05 23:41:06 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0 && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	s1[15] = "hello";
	char	s2[] = "world";
	char *prt = ft_strncat(s1, s2, 2);

	printf("%s\n", prt);
	return (0);
}*/
