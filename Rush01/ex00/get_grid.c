/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:30:05 by jteh              #+#    #+#             */
/*   Updated: 2025/09/21 10:49:50 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_num(char *str)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (is_word == 0)
			{
				count++;
				is_word = 1;
			}
		}
		else
			is_word = 0;
		str++;
	}
	return (count);
}

int	get_grid(char *str)
{
	int	num;
	int	grid;

	num = count_num(str);
	if (num % 4 != 0)
	{
		return (0);
	}
	grid = num / 4;
	if (grid > 9)
	{
		return (0);
	}
	return (grid);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	is_neg;

	i = 0;
	res = 0;
	is_neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		is_neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res += str[i] - '0';
		str++;
	}
	return (res * is_neg);
}
