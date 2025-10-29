/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:21:02 by jteh              #+#    #+#             */
/*   Updated: 2025/09/16 19:14:52 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comma(char i, char j, char a, char b);

void	ft_print_nbr(char i, char j, char a, char b)
{
	if (i < a || (i == a && j < b))
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &a, 1);
		write(1, &b, 1);
		ft_print_comma(i, j, a, b);
	}
}

void	ft_print_comma(char i, char j, char a, char b)
{
	if (i != '9' || j != '8' || a != '9' || b != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			a = '0';
			while (a <= '9')
			{
				b = '0';
				while (b <= '9')
				{
					ft_print_nbr(i, j, a, b++);
				}
				a++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
