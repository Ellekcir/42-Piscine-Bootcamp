/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:29:49 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/28 17:42:12 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	firstvalue;
	int	secondvalue;
	int	*rickelle;
	int	*jason;

	firstvalue = 6;
	secondvalue = 12;
	rickelle = &firstvalue;
	jason = &secondvalue;
	printf("\n Rickelle first had %d apples, \n", firstvalue);
	printf("while Jason first had %d apples. \n", secondvalue);
	ft_swap(rickelle, jason);
	printf("\n After a swap Rickelle now has %d apples, \n", firstvalue);
	printf("while Jason now has %d\n", secondvalue);
}
*/