/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:23:28 by jteh              #+#    #+#             */
/*   Updated: 2025/09/24 18:28:26 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	nb;

	if (argc == 2)
	{
		nb = ft_strlen(argv[1]);
		printf("%d", nb);
	}
	return (0);
}*/
