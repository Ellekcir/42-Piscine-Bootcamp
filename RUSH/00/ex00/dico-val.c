/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico-val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:01:20 by hiono             #+#    #+#             */
/*   Updated: 2024/02/11 19:32:28 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_invld(void)
{
	write(1, "Dict Error\n", 11);
	return (NULL);
}

char	*ft_val_line1(char *c)
{
	while ((*c >= 9 && *c <= 13) || *c == 32)
		c++;
	if (*c == '\0')
		return (c);
	if (*c == '+')
		c++;
	else if (*c == '-')
		return (ft_invld());
	if (!('0' <= *c && *c <= '9'))
		return (ft_invld());
	while ('0' <= *c && *c <= '9')
		c++;
	while (*c == ' ')
		c++;
	if (*c != ':')
		return (ft_invld());
	c++;
	return (c);
}

char	*ft_val_line2(char *c)
{
	while (*c == ' ')
		c++;
	if (!(('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z')))
		return (ft_invld());
	while (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z') || *c == ' ')
		c++;
	if (*c != '\n' && *c != '\0')
		return (ft_invld());
	return (c);
}

int	ft_val_dict(char *c)
{
	while (*c)
	{
		c = ft_val_line1(c);
		if (c == NULL)
			return (0);
		else if (!*c)
			return (1);
		c = ft_val_line2(c);
		if (c == NULL)
			return (0);
	}
	return (1);
}
