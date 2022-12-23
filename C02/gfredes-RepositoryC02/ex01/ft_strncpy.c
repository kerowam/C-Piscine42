/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:50:38 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/04 00:29:43 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char a[] = "copiame";
	char destn[] = "hola soy el destino";
	char *ap;
	char *destp;

	ap = &a[0];
	destp = &destn[0];

	ft_strncpy(destp, ap, 4);
	printf("%s", destp);
	//printf("%i", size);
	return(0);
}*/
