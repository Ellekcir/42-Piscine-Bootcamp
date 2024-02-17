/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:05 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/24 19:13:38 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	digit;

	digit = 48;
	while (digit <= 57)
	{
		write(1, &digit, 1);
		digit++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
