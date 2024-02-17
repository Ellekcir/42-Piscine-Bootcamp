/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:56:58 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/15 15:12:24 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	size = (max - min);
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (size + 1));
	while (max > min)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main(void)
{
	int min = 0;
	int max = 10;
	int size = max - min;
	int count = 0;
	int *tab;
	
	tab = ft_range(min, max);
	while (count < size)
	{
	printf("%d ",tab[count]);
	count++;
	}
	return (0);
}
*/
