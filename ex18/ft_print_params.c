/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 19:38:59 by jjourne           #+#    #+#             */
/*   Updated: 2016/12/23 20:02:31 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	int c;

	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c++;
	}
	return (0);
}
