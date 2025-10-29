/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:16:55 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 11:46:30 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i_loop;
	int	j_swap;

	i_loop = 0;
	while (i_loop < size - 1)
	{
		j_swap = 0;
		while (j_swap < size - i_loop - 1)
		{
			if (tab[j_swap] > tab[j_swap + 1])
				ft_swap(&tab[j_swap], &tab[j_swap + 1]);
			j_swap++;
		}
		i_loop++;
	}
}

/*int	main(void)
{
	int	arr[6] = {23, 2025, 1, 56, 89, -10};
	int	size;

	ft_sort_int_tab(arr, 6);
	size = 0;
	while (size < 6)
	{
		printf("%d ", arr[size++]);
	}
}*/
