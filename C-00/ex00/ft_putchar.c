/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:38:29 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/24 18:20:44 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This includes the library of standard input/output*/
#include <unistd.h>

/* This is a prototype function that is valid instructions
 * used in other functions but has no outcome(can't be called) */
/* write is a function used the first number 1 which represents 
 * the standard output (what you will see on your computer screen) 
 * & is the address where and the c is where the variable will be 
 * targetted, the last 1 is the number representing how many bytes
 * to write  */
/* main will execute an type def of int but in the params we put
 *  a function of ft_putchar which has a params of char, so now
 *   the main will execute a character, the c will be the calling 
 *   letter for the function ft_putchar which will standard output
 *    on your screen where the c is located in main function returning
 *     1 character. In main function the char c equals the letter 'x'
 *    therefore when main function is executed it will output x */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	char	c;

	c = 'x';
	ft_putchar(c);
	return (0);
}
*/
