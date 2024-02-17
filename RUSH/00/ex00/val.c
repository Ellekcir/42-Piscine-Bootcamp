/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:48:02 by hiono             #+#    #+#             */
/*   Updated: 2024/02/11 22:48:21 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_val_arg(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
		{
			write(1, "Error\n", 7);
			return (0);
		}
		str++;
	}
	return (1);
}

int	ft_val_args(int argc, char **argv)
{
	int	res;

	res = 1;
	if (argc > 0)
	{
		if (argc == 2)
		{
			res = ft_val_arg(argv[1]);
		}
		else if (argc == 3)
		{
			res = ft_val_arg(argv[2]);
		}
		else
		{
			write(1, "Error\n", 7);
			res = 0;
		}
	}
	return (res);
}
