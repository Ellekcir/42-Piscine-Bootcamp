/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:50:26 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/30 14:19:33 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length_of_string;

	length_of_string = 0;
	while (str[length_of_string])
		length_of_string++;
	write(1, str, length_of_string);
}
/*
int	main(void)
{
	ft_putstr("Greetings");
}
*/
