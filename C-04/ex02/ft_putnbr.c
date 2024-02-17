/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:55:12 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:20 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i < 10)
	{
		i = i + '0';
		write(1, &i, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		i = (i % 10) + '0';
		write(1, &i, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(0);
}
*/
