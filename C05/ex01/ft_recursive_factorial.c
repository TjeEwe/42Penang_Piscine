/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:29:58 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 17:44:09 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(9));
	printf("\n");
	printf("%d", ft_recursive_factorial(8));
	printf("\n");
	printf("%d", ft_recursive_factorial(7));
	printf("\n");
	printf("%d", ft_recursive_factorial(6));
	printf("\n");
	return (0);
}*/
