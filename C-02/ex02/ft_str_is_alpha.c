/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:28:27 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/31 12:46:33 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;
	int	nonalpha;

	alpha = 1;
	nonalpha = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (nonalpha);
		}
		i++;
	}
	return (alpha);
}

#include <stdio.h>

int	main(void)
{
	char	*string;
	int	d;

	string = "ab&D";
	d = ft_str_is_alpha(string);
	printf(" \nstring: \n%d\n ", d);
}

