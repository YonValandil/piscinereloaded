/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 12:27:38 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/05 23:05:17 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *d;

	d = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (d == NULL)
		return (0);
	d = ft_strcpy(d, src);
	return (d);
}
