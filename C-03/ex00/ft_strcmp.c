/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:10:29 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/05 15:57:00 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	printf("Should return -49:\n%d\n", ft_strcmp("Doggo", "Doggo1"));
	printf("Should return 108:\n%d\n", ft_strcmp("Hello", "Hel"));
	printf("Should return -108:\n%d\n", ft_strcmp("Hel", "Hello"));
	printf("Should return 0: \n%d\n\n\n\n\n", ft_strcmp("Hello", "Hello"));
	printf("\n %d \n", strcmp("Good", "Good1"));
	printf("\n %d \n", strcmp("Hello", "Hel"));
	printf("\n %d \n", strcmp("Hel", "Hello"));
	printf("\n %d \n", strcmp("", ""));
}
*/
