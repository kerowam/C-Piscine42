/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:21:08 by gfredes-          #+#    #+#             */
/*   Updated: 2022/10/29 23:29:32 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {6, 5, 1, 4, 2}; 
	int size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}
