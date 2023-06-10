/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:24:11 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/05 23:41:58 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (to_find == 0)
		return (str);
	while (str[i] != 0)
	{
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			if (to_find[j + 1] == 0)
			{
				ptr = &str[i - j];
				return (ptr);
			}
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main( void )
{
    printf( "%s\n", strstr("This is an example", "is") );
	printf( "%s\n", ft_strstr("This is an example", "is") );
    return (0);
}*/
