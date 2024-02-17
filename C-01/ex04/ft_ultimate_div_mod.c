/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:26:22 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/28 21:20:42 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divided;
	int	modulus;

	divided = *a;
	modulus = *b;
	*a = divided / modulus;
	*b = divided % modulus;
}
/*
int	main(void)
{
	int	d;
	int	c;

	d = 42;
	c = 10;
	printf("\n %d should be divided by the number %d, \n", d, c);
	ft_ultimate_div_mod(&d, &c);
	printf(" to get divided total: %d & modulus value of: %d\n\n", d, c);
}
*/
