/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:30:48 by jteh              #+#    #+#             */
/*   Updated: 2025/09/24 18:56:31 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*This function use recursion to print out the nb in char
 *
 * Calling recursion function when the val is > 10
 *
 * Need to consider neg value and max value.
 *
 * When recursion finish, it will execute % 10 to get the last digit,
 * and print out with write() function.
 */
void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	num = (nb % 10) + '0';
	write(1, &num, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(4242980);
	return (0);
}*/
