/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prac.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:13:35 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/25 11:32:02 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write (1 ,&c, 1);
// }

// int main(void)
// {
// 	ft_putchar('a');
// }

// #include <unistd.h>

// void	ft_print_alphabet(void)
// {
// 	int	a;

// 	a = 'a';
// 	while (a <= 'z')
// 	{
// 		write(1, &a, 1);
// 		a++;
// 	}
// }

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return(0);
// }

// #include <unistd.h>

// void	ft_print_number(void)
// {
// 	char	digit;

// 	digit = 48;
// 	while (digit <= 57)
// 	{
// 		write(1, &digit, 1);
// 		digit++;
// 	}
// }

// int	main(void)
// {
// 	ft_print_number();
// 	return(0);
// }
#include <unistd.h>

void	ft_is_negative(int n)
{

	if (n >= 0)
	{
		write(1, &"P", 1);
	}
	else 
	{
		write(1, &"N", 1);
	}
}

int main(void)
{
	ft_is_negative(200);
	return(0);
}