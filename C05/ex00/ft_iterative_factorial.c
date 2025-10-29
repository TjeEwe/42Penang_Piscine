/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:59:20 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 17:26:11 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Need to consider
 *
 * 1.) Val less than 0
 * 2.) Val equal 0
 * 3.) Val more than 0
 */
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(9));
	printf("\n");
	printf("%d", ft_iterative_factorial(8));
	printf("\n");
	printf("%d", ft_iterative_factorial(7));
	printf("\n");
	printf("%d", ft_iterative_factorial(6));
	printf("\n");
	printf("%d", ft_iterative_factorial(5));
}*/
