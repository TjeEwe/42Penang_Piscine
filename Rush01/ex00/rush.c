/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 22:29:57 by jteh              #+#    #+#             */
/*   Updated: 2025/09/21 12:44:30 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_in_row(int **arr, int gridsize, int row, int val);

int	is_in_col(int **arr, int gridsize, int col, int val);

int	view_left(int *arr, int gridsize);

int	view_right(int *arr, int gridsize);

int	print_board(int **board, int grid)
{
	int		rows;
	int		cols;
	char	ch;

	rows = 0;
	while (rows < grid)
	{
		cols = 0;
		while (cols < grid)
		{
			ch = board[rows][cols] + '0';
			write(1, &ch, 1);
			if (cols < grid - 1)
				write(1, " ", 1);
			cols++;
		}
		write(1, "\n", 1);
		rows++;
	}
	return (1);
}

int	check_row_clues(int **board, int grid, int **clues, int row)
{
	int	left;
	int	right;

	left = view_left(board[row], grid);
	right = view_right(board[row], grid);
	return (left == clues[2][row] && right == clues[3][row]);
}

int	check_col_clues(int **board, int grid, int **clues, int col)
{
	int	*buffer;
	int	i;
	int	res;

	i = 0;
	buffer = malloc(sizeof(int) * grid);
	if (!buffer)
		return (0);
	while (i < grid)
	{
		buffer[i] = board[i][col];
		i++;
	}
	res = ((view_left(buffer, grid) == clues[0][col])
			&& (view_right(buffer, grid) == clues[1][col]));
	free(buffer);
	return (res);
}

int	rush_recursive(int **board, int grid, int **clues, int pos)
{
	int	val;
	int	row;
	int	col;

	if (pos >= grid * grid)
		return (print_board(board, grid));
	row = pos / grid;
	col = pos % grid;
	val = 1;
	while (val <= grid)
	{
		if (is_in_row(board, grid, row, val) != 1
			&& is_in_col(board, grid, col, val) != 1)
		{
			board[row][col] = val;
			if ((row != grid - 1 || check_col_clues(board, grid, clues, col))
				&& (col != grid - 1 || check_row_clues(board, grid, clues, row))
				&& rush_recursive(board, grid, clues, pos + 1))
				return (1);
			board[row][col] = 0;
		}
		val ++;
	}
	return (0);
}
