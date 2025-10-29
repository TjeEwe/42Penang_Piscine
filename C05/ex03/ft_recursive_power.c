/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:28:25 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 18:36:10 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(2, 4));
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(2, 6));
	return (0);
}*/
