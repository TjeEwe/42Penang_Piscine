/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:18:51 by jteh              #+#    #+#             */
/*   Updated: 2025/09/21 10:49:56 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**memory_alloc(int rows, int cols)
{
	int	**arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int *) * rows);
	if (!arr)
		return (0);
	while (i < rows)
	{
		arr[i] = malloc(sizeof(int) * cols);
		if (!arr[i])
		{
			while (--i >= 0)
				free(arr[i]);
			free(arr);
			return (0);
		}
		i++;
	}
	return (arr);
}

void	free_memory(int **arr, int rows)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (i < rows)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
