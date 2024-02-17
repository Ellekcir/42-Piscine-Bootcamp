/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:41:21 by rgriffit          #+#    #+#             */
/*   Updated: 2024/01/29 14:27:32 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lengthofstring;

	lengthofstring = 0;
	while (str[lengthofstring])
		lengthofstring++;
	return (lengthofstring);
}
/*
int	main()
{
	printf("%d", ft_strlen("Hello"));
}
*/
/*
int	ft_strlen(char *str)
{
		int	lengthofstring;

		lengthofstring = 0;
		while (str[lengthofstring])
			lengthofstring++;
		return (lengthofstring);
		//	write(1, str, lengthofstring);OUTPUT : Hello
		//	printf("%d", lengthofstring);OUTPUT : 5
}

int	main()
{
	printf("%d", ft_strlen("Hello")); 
//the length should have 6 5 letters + '/0' null character
}
*/
