/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:30:10 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 16:26:28 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_atoi(): Receive input str, Return output int num
 *
 * Skip space function
 * Calculate - number (even +, odd -)
 *
 * num * 10 to add the digit space
 * *str - '0' to convert to int base
 *
 */
int	ft_atoi(char *str)
{
	int	neg_count;
	int	num;

	num = 0;
	neg_count = 0;
	while ((*str >= 7 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num += *str - '0';
		str++;
	}
	if (neg_count % 2 != 0)
		num = -num;
	return (num);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	num = ft_atoi(argv[1]);
		printf("%d", num);
	}
}*/
