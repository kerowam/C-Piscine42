/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:08:11 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/03 20:20:22 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (str[i] >= 'A' && str[i] <= 'Z'))
					str[i] += 32;
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z'
			&& str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if ((str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z') && (str[i] >= 'a' && str[i] <= 'z'))
					str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, commet tu vas ? 42mots quarante-deux: cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
