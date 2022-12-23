/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:54:48 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/04 13:11:56 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char	*src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	if (size > 0)
	{	
		while (src[c] != '\0')
		{
			c++;
		}
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
/*
int	main(void)
{
	char a[] = "copiame";
	char destn[] = "hola soy el destino";
	char *ap;
	char *destp;
	unsigned int	size  = 0;

	ap = &a[0];
	destp = &destn[0];

	size = ft_strlcpy(destp, ap, 4);
	printf("%s", destp);
	printf("%i", size);
	return(0);
}*/
