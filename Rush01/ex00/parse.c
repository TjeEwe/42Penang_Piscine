/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:30:05 by jteh              #+#    #+#             */
/*   Updated: 2025/09/21 10:40:59 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**memory_alloc(int rows, int cols);

int		ft_atoi(char *str);

void	free_memory(int **arr, int rows);

int	assign_clues(int i, int grid, int val, int **clues)
{
	if (val < 0 || val > grid)
		return (0);
	if (i < grid)
		clues[0][i] = val;
	else if (i < grid * 2)
		clues[1][i - grid] = val;
	else if (i < grid * 3)
		clues[2][i - 2 * grid] = val;
	else if (i < grid * 4)
		clues[3][i - 3 * grid] = val;
	else
		return (0);
	return (1);
}

int	parse_clues(char *str, int grid, int ***clues)
{
	int	i;
	int	val;
	int	**temp;
	int	flag;

	i = 0;
	temp = memory_alloc(4, grid);
	if (!temp || str[0] == ' ')
		return (0);
	while (*str)
	{
		flag = 0;
		if (*str == '\0')
			break ;
		val = ft_atoi(str);
		if (*str++ == ' ' && flag == 0)
		{
			str++;
			flag += 1;
		}
		if (!(assign_clues(i++, grid, val, temp)))
			return (free_memory(temp, 4), 0);
	}
	return ((*clues = temp), 1);
}
