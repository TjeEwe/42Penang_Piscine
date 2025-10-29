/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:11:12 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 16:24:54 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *base)
{
	int	count;

	count = 0;
	while (*base)
	{
		count++;
		base++;
	}
	return (count);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/*
 * str: A pointer to the caller's string pointer (char **)
 *
 * *str: Caller's pointer (char *)
 * **str: The actual char in the string.
 *
 * *str is the original pointer to the current char
 * (*str)++, we can move the pointer in the caller also.
 * Cuz the pointer address being ++
 *
 */
int	check_neg(char **str)
{
	int	neg;

	neg = 1;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			neg *= -1;
		(*str)++;
	}
	return (neg);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	sign;
	int	base_len;
	int	remainder;

	base_len = ft_strlen(base);
	num = 0;
	remainder = 0;
	if (!is_valid_base(base))
		return (0);
	while ((*str >= 7 && *str <= 13) || *str == ' ')
		str++;
	sign = check_neg(&str);
	while (*str)
	{
		remainder = base_index(*str, base);
		if (remainder == -1)
			break ;
		num = num * base_len + remainder;
		str++;
	}
	return (num * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("\n");
	printf("%d", ft_atoi_base("101010", "01"));
	printf("\n");
	printf("%d", ft_atoi_base(" 4a2", "0123456789"));
	printf("\n");
	printf("%d", ft_atoi_base("yv", "poneyvif"));
	printf("\n");
	return (0);
}*/
