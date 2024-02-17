/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:32:11 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/12 15:49:07 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	p;

	n = nb;
	p = power;
	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	while (p > 1)
	{
		n *= nb;
		p--;
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
}
*/
