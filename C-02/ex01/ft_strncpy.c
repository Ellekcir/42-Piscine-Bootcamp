/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:32:26 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/02 10:22:54 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>	
int	main(void)
{
	char	*src;
	char 	dest[13] = "ooooooooooo";

	src = "Hello where are you";
	strncpy(dest, src, 8);
	printf("\n%s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("\n%s\n", dest);
}
*/
