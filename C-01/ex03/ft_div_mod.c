/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:30:11 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/28 20:16:18 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	modulus;
	int	divided;

	c = 42;
	d = 10;
	ft_div_mod(c, d, &divided, &modulus);
	printf("\n If we divided %d by %d\n", c, d);
	printf(" it would equal %d, \n", divided);
	printf(" with %d remainders. \n", modulus);
}
*/