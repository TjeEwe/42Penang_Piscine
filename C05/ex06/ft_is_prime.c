/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 12:14:33 by jteh              #+#    #+#             */
/*   Updated: 2025/09/26 12:32:01 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Only need to test up to nb ^1/2 (square root) of nb
 *
 * For big num, it is very slow to test until i < nb
 *
 * Need to test neg value below 1 is not prime number
 */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(21));
	printf("%d\n", ft_is_prime(24));
	printf("%d\n", ft_is_prime(89));
	printf("%d\n", ft_is_prime(137));
	printf("%d\n", ft_is_prime(229));
	printf("%d\n", ft_is_prime(131));
	printf("%d\n", ft_is_prime(997));
}*/
