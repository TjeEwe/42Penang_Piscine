/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 11:59:07 by jteh              #+#    #+#             */
/*   Updated: 2025/09/26 12:12:52 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(101));
	printf("%d\n", ft_sqrt(125));
	return (0);
}*/
