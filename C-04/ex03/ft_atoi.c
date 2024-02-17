/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:41:47 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/07 12:54:55 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;

	result = 0;
	neg = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
		{
			neg *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*str = " ---+--+1234ab567";
	int			num = atoi(str);
	int			a;

	a = ft_atoi(str);
	printf("\nConverted string '%s' to integer: %d\n", str, a);
	printf("\nConverted string '%s' to integer: %d\n", str, num);
	return (0);
}
*/
