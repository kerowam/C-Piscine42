/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:57:20 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/08 14:50:21 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	**ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		n;
	char	*aux;

	i = 0;
	n = 0;
	while (n < size)
	{
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		i = 0;
		n++;
	}
	return (0);
}

void	ft_print_params(char **argv, int argc)
{
	int	c;
	int	i;

	c = 1;
	while (c < argc)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_int_tab(argv, argc);
		ft_print_params(argv, argc);
	}
	return (0);
}
