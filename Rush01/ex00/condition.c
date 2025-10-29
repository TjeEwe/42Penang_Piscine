/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:56:27 by jteh              #+#    #+#             */
/*   Updated: 2025/09/21 12:24:59 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	view_left(int *arr, int gridsize)
{
	int	i;
	int	tallest;
	int	seen;

	i = 0;
	tallest = 0;
	seen = 0;
	while (i < gridsize)
	{
		if (arr[i] > tallest)
		{
			tallest = arr[i];
			seen++;
		}
		i++;
	}
	return (seen);
}

int	view_right(int *arr, int gridsize)
{
	int	i;
	int	tallest;
	int	seen;

	i = gridsize - 1;
	tallest = 0;
	seen = 0;
	while (i >= 0)
	{
		if (arr[i] > tallest)
		{
			tallest = arr[i];
			seen++;
		}
		i--;
	}
	return (seen);
}

int	is_in_row(int **arr, int gridsize, int row, int val)
{
	int	count;

	count = 0;
	while (count < gridsize)
	{
		if (arr[row][count] == val)
			return (1);
		count++;
	}
	return (0);
}

int	is_in_col(int **arr, int gridsize, int col, int val)
{
	int	count;

	count = 0;
	while (count < gridsize)
	{
		if (arr[count][col] == val)
			return (1);
		count++;
	}
	return (0);
}
