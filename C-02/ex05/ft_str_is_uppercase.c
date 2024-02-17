/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:46:02 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/31 16:05:42 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		d;

	str = "";
	d = ft_str_is_uppercase(str);
	printf("%d", d);
}
*/
