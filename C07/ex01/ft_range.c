/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:42:11 by jteh              #+#    #+#             */
/*   Updated: 2025/09/30 14:11:45 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*temp;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	temp = malloc(sizeof(int) * len);
	if (!temp)
		return (NULL);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*test;

	test = ft_range(100, 1);
	if (test == NULL)
		return (1);
	while (*test)
	{
		printf("%d ", *test);
		test++;
	}
	return (0);
}*/
