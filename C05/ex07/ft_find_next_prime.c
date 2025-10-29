/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 12:33:05 by jteh              #+#    #+#             */
/*   Updated: 2025/09/26 12:55:25 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Need to consider
 *
 * 1.) Negative value
 * 2.) Value less than or equal 1
 * 3.) Value == 2
 */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-10));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(41));
	printf("%d\n", ft_find_next_prime(25));
	printf("%d\n", ft_find_next_prime(37));
	printf("%d\n", ft_find_next_prime(100));
	printf("%d\n", ft_find_next_prime(101));
}*/
