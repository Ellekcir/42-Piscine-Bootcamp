/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nialmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:46:34 by nialmeid          #+#    #+#             */
/*   Updated: 2024/02/03 17:55:46 by nialmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	argcheck(char *str);

int	main(int argc, char *argv[]) // takes input and assigns to idk an arr?
{
	int	x;

	if (argc != 2)
	{
		return (1);
	}
	x = argcheck(argv[1]);

	if (x == -1)
	{
		printf("wrong arg\n");
	}
	else
	{
		printf("%i\n", x);
	}

}

int	argcheck(char *str) // argument checker to see if theyre valid
{
	int	i;
	int j;

	i = 0;
	j = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j++;
		}
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == ' '))
		{
			i++;
		}
		else
		{
			return (-1);
		}
	}
	if (j % 4 != 0 || j < 4 || j > 36)
	{
		return (-1);
	}
	return (j);
}

char	*parsearg(char *str) // parse arg into matrix array i.e matrix[1, 3, 5,3...]
{
	char	matrix[16];
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			matrix[x] = str[i];
			x++;
		}
		i++;
	}
	printf("%s", matrix[x]); //figure out how to print this
	return (matrix);
}


