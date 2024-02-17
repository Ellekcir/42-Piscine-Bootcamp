/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:08:37 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/12 15:43:00 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(7));
}
*/
