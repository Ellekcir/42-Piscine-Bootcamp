/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:30:05 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/15 15:14:34 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	while (max > min)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr[10];
	int	i;
	int	min;
	int	max;
	int	size;
	int	result;

	min = 0;
	max = 10;
	size = max - min;
	i = 0;
	result = ft_ultimate_range(arr, min, max);
	while (i < size)
	{
		printf("%d\n", arr[0][i]);
		i++;
	}
	printf("%d\n", result); 

	return (0);
}
*/
