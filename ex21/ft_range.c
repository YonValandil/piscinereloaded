/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 16:24:47 by jjourne           #+#    #+#             */
/*   Updated: 2016/12/24 17:11:38 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int c;
	int *t;

	if (max < min || max == min)
		return (0);
	c = 0;
	t = malloc((max - min) * sizeof(int));
	if (t == NULL)
		return (0);
	while (min < max)
	{
		t[c] = min;
		c++;
		min++;
	}
	return (t);
}
