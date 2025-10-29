/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:18:29 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 11:08:19 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < size / 2)
	{
		temp = tab[size - count - 1];
		tab[size - count - 1] = tab[count];
		tab[count] = temp;
		count++;
	}
}

/*int	main(void)
{
	int	arr[6];
	int	size;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	ft_rev_int_tab(arr, 6);
	size = 0;
	while (size < 6)
	{
		printf("%d", arr[size++]);
	}
	return (0);
}*/
