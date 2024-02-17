/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:28:14 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/29 20:07:34 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	n;

	i = 0;
	n = 1;
	while (i < size / 2)
	{
		temp = tab[size - n];
		tab[size - n] = tab[i];
		tab[i] = temp;
		i++;
		n++;
	}
}
/*
int	main(void)
{
	int	sizeofarray;
	int	array[] = {1, 2, 3, 4, 5};

	sizeofarray = 5;
	printf("\n\n %d, %d, %d\n", array[0], array[1], array[2]);
	ft_rev_int_tab(array, sizeofarray);
	printf("\n\n %d, %d, %d\n", array[0], array[1], array[2]);
}
*/
