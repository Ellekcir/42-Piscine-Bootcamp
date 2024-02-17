/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:01:51 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/31 15:40:36 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	*string;
	int		d;

	string = "";
	d = ft_str_is_lowercase(string);
	printf("%d", d);
}
*/
