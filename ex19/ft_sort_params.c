/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 20:05:46 by jjourne           #+#    #+#             */
/*   Updated: 2017/01/10 04:06:46 by jjourne          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	affiche(char *argv[], int argc)
{
	int c_arg;

	c_arg = 1;
	while (c_arg < argc)
	{
		ft_putstr(argv[c_arg]);
		ft_putchar('\n');
		c_arg++;
	}
}

int		main(int argc, char *argv[])
{
	int		sorted;
	int		c_arg;
	char	*str_tmp;

	sorted = 1;
	while (sorted)
	{
		sorted = 0;
		c_arg = 1;
		while (c_arg < argc - 1)
		{
			if (ft_strcmp(argv[c_arg], argv[c_arg + 1]) > 0)
			{
				sorted = 1;
				str_tmp = argv[c_arg];
				argv[c_arg] = argv[c_arg + 1];
				argv[c_arg + 1] = str_tmp;
			}
			c_arg++;
		}
	}
	affiche(argv, argc);
	return (0);
}
