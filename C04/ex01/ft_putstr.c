/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:21:03 by jteh              #+#    #+#             */
/*   Updated: 2025/09/24 18:22:34 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Only need to add NULL terminator
 * for function: strcpy, strcat, itoa
 * when building a string
 */
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(argv[1]);
	return (0);
}*/
