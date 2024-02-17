/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso, jeschill, rgriffit, jasteoh      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:30:04 by pthompso          #+#    #+#             */
/*   Updated: 2024/01/27 15:39:45 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_line(int x, char leftcorner, char inner, char rightcorner)
{
	if (x <= 0)
	{
		//write(2, "Error: please try again\n", [string amount])
		return ;
	}
	if (x != 1)
	{
		ft_putchar(leftcorner);
	}
	x -= 2;
	while (x > 0)
	{
		ft_putchar(inner);
		x--;
	}
	ft_putchar(rightcorner);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y <= 0)
	{
		return ;
	}
	if (y != 1)
	{
		ft_put_line(x, 'o', '-', 'o');
	}
	y -= 2;
	while (y > 0)
	{
		ft_put_line(x, '|', ' ', '|');
		y--;
	}
	ft_put_line(x, 'o', '-', 'o');
}

/*
// EX01
void	rush(int x, int y)
{
	if (y <= 0)
	{
		return ;
	}
	if (y != 1)
	{
		ft_put_line(x, '/', '*', '\\');
	}
	y -= 2;
	while (y > 0)
	{
		ft_put_line(x, '*', ' ', '*');
		y--;
	}
	ft_put_line(x, '\\', '*', '/');
}
*/

/*
// EX02
void	rush(int x, int y)
{
	if (y <= 0)
	{
		return ;
	}
	if (y != 1)
	{
		ft_put_line(x, 'A', 'B', 'A');
	}
	y -= 2;
	while (y > 0)
	{
		ft_put_line(x, 'B', ' ', 'B');
		y--;
	}
	ft_put_line(x, 'C', 'B', 'C');
}
*/

/*
// EX03
void	rush(int x, int y)
{
	if (y <= 0)
	{
		return ;
	}
	if (y != 1)
	{
		ft_put_line(x, 'A', 'B', 'C');
	}
	y -= 2;
	while (y > 0)
	{
		ft_put_line(x, 'B', ' ', 'B');
		y--;
	}
	ft_put_line(x, 'A', 'B', 'C');
}
*/

/*
// EX04
void	rush(int x, int y)
{
	if (y <= 0)
	{
		return ;
	}
	if (y != 1)
	{
		ft_put_line(x, 'A', 'B', 'C');
	}
	y -= 2;
	while (y > 0)
	{
		ft_put_line(x, 'B', ' ', 'B');
		y--;
	}
	ft_put_line(x, 'C', 'B', 'A');
}
*/
