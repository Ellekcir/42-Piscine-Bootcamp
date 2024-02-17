/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:47:26 by hiono             #+#    #+#             */
/*   Updated: 2024/02/11 22:32:46 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>

int	ft_dlines(char *c)
{
	int	l;

	l = 0;
	while (*c)
	{
		while ((9 <= *c && *c <= 13) || *c == 32 || *c == '+' || *c == '-')
			c++;
		if ('0' <= *c && *c <= '9')
			l++;
		while ('0' <= *c && *c <= '9')
			c++;
		while (*c == ' ' || *c == ':')
			c++;
		while (*c != '\n' && *c != '\0')
			c++;
	}
	return (l);
}

char	*ft_memory(void)
{
	int		dict;
	char	*c;
	int		sz;

	dict = open("numbers.dict", O_RDONLY);
	c = malloc(sizeof(char) * 800);
	sz = read(dict, c, 800);
	if (sz > 0)
		return (c);
	return (c);
}

char	*ft_put_in_dico(int count, int count2, char *c)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (count2 - count + 2));
	while (count <= count2)
	{
		str[i] = c[count];
		count++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strncmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_str(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	write (1, " ", 1);
}

char	*ft_search_dict(char *str, char **dico)
{
	int	i;

	i = 0;
	while (dico[i * 2])
	{
		if (ft_strncmp(str, dico[i * 2]) == 0)
		{
			ft_print_str(dico[i * 2 + 1]);
			return (dico[i * 2 + 1]);
		}
		i++;
	}
	write(1, "Dict Error\n", 11);
	return (NULL);
}

char	**ft_dico(char *c)
{
	int		count;
	int		count2;
	char	*s;
	char	**dico;
	int		i;

	count = 0;
	count2 = 0;
	i = 0;
	dico = malloc(sizeof(char *) * ft_dlines(c) * 2);
	while (c[count])
	{
		if ((c[count] >= '0' && c[count] <= '9')
			|| (c[count] >= 'a' && c[count] <= 'z'))
		{
			count2 = count;
			while ((c[count2] >= '0' && c[count2] <= '9')
				|| (c[count2] >= 'a' && c[count2] <= 'z'))
				count2++;
			count2 -= 1;
			s = ft_put_in_dico(count, count2, c);
			dico[i] = s;
			i++;
			count = count2;
		}
		count++;
	}
	return (dico);
}

void	ft_hundread2(char *nb, char *str, int *count2, char **dico)
{
	if (ft_strlen(str) == 3)
	{
		str[1] = '\0';
		str[2] = '\0';
	}
	else if (str[0] == '1')
	{
		if (ft_strlen(nb) == 2 || ft_strlen(nb) == 3)
		{
			str[1] = nb[ft_strlen(nb) - 1];
			str[2] = '\0';
			*count2 = 3;
		}
	}
	ft_search_dict(str, dico);
	if (ft_strlen(nb) == 3 && *count2 == 0)
		ft_search_dict("100", dico);
}

void	ft_hundread(char *nb, char **dico)
{
	int		count;
	int		count2;
	char	*str;

	count = 0;
	count2 = 0;
	while (count2 < ft_strlen(nb))
	{
		str = NULL;
		str = malloc(sizeof(char) * (ft_strlen(nb) - count2));
		str[count] = nb[count2];
		count += 1;
		if (nb[0] == '0' && ft_strlen(nb) == 1)
			ft_search_dict(str, dico);
		if (!(nb[count2] == '0'))
		{
			while (count < (ft_strlen(nb) - count2))
			{
				str[count] = '0';
				count++;
			}
			ft_hundread2(nb, str, &count2, dico);
		}
		count2++;
		count = 0;
	}
}

void	ft_strrev(char *str)
{
	int		count;
	int		count2;
	char	temp;

	count = 0;
	count2 = ft_strlen(str) - 1;
	while (count < count2)
	{
		temp = str[count];
		str[count] = str[count2];
		str[count2] = temp;
		count++;
		count2--;
	}
}

void	ft_put_in_str(char *src, char **dest, int pos)
{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[pos][count] = src[count];
		count++;
	}
	dest[pos][count] = '\0';
}

void	ft_print_words(char **nb_div, int count, char **dico)
{
	int	count2;
	int	count3;
	int	big;

	count2 = 0;
	big = 1;
	count3 = 0;
	while (count2 < count * 3)
	{
		big *= 10;
		count2++;
	}
	while (count >= 0)
	{
		ft_hundread(nb_div[count], dico);
		if (big > 1)
			printf("%d\n", big);
		while (count3 < 3)
		{
			big /= 10;
			count3++;
		}
		count3 = 0;
		count--;
	}
}

void	ft_thousand(char *nb, char **dico)
{
	char	*str;
	char	**nb_div;
	int		count;
	int		count2;
	int		count3;

	str = malloc(sizeof(char) * 4);
	count = 0;
	count2 = 0;
	count3 = 0;
	nb_div = malloc(sizeof(char *) * (ft_strlen(nb) / 3 + 1));
	while (count2 < ft_strlen(nb))
	{
		while (count < 3)
		{
			str[count] = nb[ft_strlen(nb) - count2 - 1];
			count++;
			count2++;
		}
		str[count] = '\0';
		ft_strrev(str);
		ft_put_in_str(str, nb_div, count3);
		count3++;
		count = 0;
	}
	count = ft_strlen(nb) / 3.1;
	ft_print_words(nb_div, count, dico);
}

char	*ft_rush02(char *nb)
{
	char	**dico;
	char	*c;

	c = ft_memory();
	dico = ft_dico(c);
	ft_hundread(nb, dico);
	return ("ok");
}

int	main(int argc, char *argv[])
{
	char	*nbr_write;

	nbr_write = ft_rush02(argv[1]);
	return (argc);
}
