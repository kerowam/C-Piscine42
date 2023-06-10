/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:54:23 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/05 21:11:24 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
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
    printf( "%d\n", strcmp( "abcdef", "abcdef" ) );
    printf( "%d\n", strcmp( "abcdef", "abc" ) );
    printf( "%d\n", strcmp( "abc", "abcdef" ) );
    printf( "%d\n", strcmp( "abcdef", "mnopqr" ) );
   	printf( "%d\n", strcmp( "mnopqr", "abcdef" ) );
	write(1, "\n", 1);	 
	printf( "%d\n", ft_strcmp( "abcdef", "abcdef" ) );
    printf( "%d\n", ft_strcmp( "abcdef", "abc" ) );
    printf( "%d\n", ft_strcmp( "abc", "abcdef" ) );
    printf( "%d\n", ft_strcmp( "abcdef", "mnopqr" ) );
    printf( "%d\n", ft_strcmp( "mnopqr", "abcdef" ) );
}*/
