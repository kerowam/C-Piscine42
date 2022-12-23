/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:35:37 by gfredes-          #+#    #+#             */
/*   Updated: 2022/11/01 18:26:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = tab [i];
		tab [i] = tab [j];
		tab [j] = aux;
		i++;
		j--;
	}
}
