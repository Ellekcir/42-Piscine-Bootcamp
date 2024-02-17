/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:49:57 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/05 18:02:39 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("ft_strncopy: %d\n", ft_strncmp("TesfString", "TestStrinG", 8));
	printf("strncopy:%d\n\n", strncmp("TesfString", "TestStrinG", 8));
	printf("ft_strncopy: %d\n", ft_strncmp("TestString", "TestStRing", 8));
	printf("strncopy:%d\n\n", strncmp("TestString", "TestStRing", 8));
	printf("ft_strncopy: %d\n", ft_strncmp("", "", 8));
	printf("strncopy:%d\n\n", strncmp("", "", 8));
	printf("ft_strncopy: %d\n", ft_strncmp("Test", "Te7777777stS", 4));
	printf("strncopy:%d\n\n", strncmp("Test", "Te7stS", 4));
}
*/
