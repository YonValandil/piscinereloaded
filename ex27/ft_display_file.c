/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 17:37:36 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/06 06:09:46 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int		fd;
	int		r;
	char	buf[BUF_SIZE + 1];

	r = 1;
	fd = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd > 0)
		{
			while (r > 0)
			{
				r = read(fd, buf, BUF_SIZE);
				buf[r] = '\0';
				ft_putstr(buf);
			}
		}
	}
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		write(2, "File name missing.\n", 19);
	return (0);
}
