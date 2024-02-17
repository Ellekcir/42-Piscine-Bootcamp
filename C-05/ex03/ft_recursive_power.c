/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:20:34 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/12 15:57:21 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
		nb = n * ft_recursive_power(n, (power - 1));
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf(" %d ", ft_recursive_power(5, 3));
}
*/
