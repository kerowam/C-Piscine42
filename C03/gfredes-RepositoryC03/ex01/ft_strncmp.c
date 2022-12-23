/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:08:00 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/05 21:10:34 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main( void )
{
    printf( "%d\n", strncmp( "abcdef", "abcdef", 4) );
    printf( "%d\n", strncmp( "abcdef", "abc", 3 ) );
    printf( "%d\n", strncmp( "abc", "abcdef", 4 ) );
    printf( "%d\n", strncmp( "abcdef", "mnopqr", 3 ) );
   	printf( "%d\n", strncmp( "mnopqr", "abcdef", 4 ) );
	write(1, "\n", 1);
	printf( "%d\n", ft_strncmp( "abcdef", "abcdef", 4) );
    printf( "%d\n", ft_strncmp( "abcdef", "abc", 3) );
    printf( "%d\n", ft_strncmp( "abc", "abcdef", 4) );
    printf( "%d\n", ft_strncmp( "abcdef", "mnopqr", 3) );
    printf( "%d\n", ft_strncmp( "mnopqr", "abcdef", 4) );
}*/
