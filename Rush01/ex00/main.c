/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:30:05 by jteh              #+#    #+#             */
/*   Updated: 2025/09/21 10:40:25 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_grid(char *str);

int		parse_clues(char *str, int grid, int ***clues);

int		**memory_alloc(int rows, int cols);

void	free_memory(int **arr, int rows);

int		rush_recursive(int **board, int grid, int **clues, int pos);

void	put_error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char *argv[])
{
	int	grid_size;
	int	**clues;
	int	**board;

	if (argc != 2)
		return (put_error(), 1);
	grid_size = get_grid(argv[1]);
	if (grid_size == 0)
		return (put_error(), 1);
	if (!parse_clues(argv[1], grid_size, &clues))
		return (put_error(), 1);
	board = memory_alloc(grid_size, grid_size);
	if (!board)
		return (put_error(), free_memory(clues, 4), 1);
	if (!rush_recursive(board, grid_size, clues, 0))
		put_error();
	free_memory(board, grid_size);
	free_memory(clues, 4);
	return (0);
}
