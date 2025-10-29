/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:45:37 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 18:27:58 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(2, 2));
	printf("\n");
	printf("%d", ft_iterative_power(2, 3));
	printf("\n");
	printf("%d", ft_iterative_power(2, 4));
	printf("\n");
	printf("%d", ft_iterative_power(2, 5));
	printf("\n");
	return (0);
}*/
