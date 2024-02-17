/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:11:17 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/30 11:27:44 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	tempindex;

	index = 1;
	while (index < size)
	{
		tempindex = index;
		while (tempindex > 0 && *(tab + tempindex - 1) > *(tab + tempindex))
		{
			swap(tab + tempindex, tab + tempindex - 1);
			tempindex--;
		}
		index++;
	}
}
/*
int	main(void)
{
	int	tab[4];
	int	size;

	tab[4] = {34, 2, 35, 4};
	size = 4;
	printf("\n\n%d, %d, %d, %d\n\n", tab[0], tab[1], tab[2], tab[3]);
	ft_sort_int_tab(tab, size);
	printf("\n\n%d, %d, %d, %d\n\n", tab[0], tab[1], tab[2], tab[3]);
}
*/
//Create a function with sorts an array of integers by ascending order
