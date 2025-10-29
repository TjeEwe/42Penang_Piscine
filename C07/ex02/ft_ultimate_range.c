/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:42:28 by jteh              #+#    #+#             */
/*   Updated: 2025/09/30 15:27:39 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* Differences between param *range and **range
 *
 * Param *range → receives the address of the first element of an array.
 * Param **range → receives the address of a pointer
 * 			(that will point to the array).
 */
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	ptr = *range;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*test;
	int	size;

	size = ft_ultimate_range(&test, 1, 9);
	while (*test)
	{
		printf("%d ", *test);
		test++;
	}
	printf("Size: %d", size);
	return (0);
}*/
