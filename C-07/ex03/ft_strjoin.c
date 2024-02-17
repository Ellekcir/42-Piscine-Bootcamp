/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgriffit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:49:25 by rgriffit          #+#    #+#             */
/*   Updated: 2024/02/15 15:17:17 by rgriffit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] > '\0')
		i++;
	return (i + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = ft_strlen(dest);
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_sizeoftotalstr(int size, char **strs, char *sep)
{
	int	i;
	int	seplen;
	int	result;

	seplen = ft_strlen(sep);
	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			result += seplen;
		}
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mem;
	int		i;

	mem = malloc(sizeof(char) * ft_sizeoftotalstr(size, strs, sep));
	if (!mem)
	{
		return (NULL);
	}
	*mem = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(mem, strs[i]);
		if (i < (size - 1))
		{
			ft_strcat(mem, sep);
		}
		i++;
	}
	return (mem);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*sep;

	sep = "//";
	printf("\n\n\n%s", ft_strjoin(argc, argv, sep));
	return (0);
}
*/
