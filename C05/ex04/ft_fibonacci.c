/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:37:05 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 18:49:00 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fibonacci logic: fn = f1 + f0*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci (index -2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(5));
	return (0);
}*/
