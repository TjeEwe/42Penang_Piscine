/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:11:12 by jteh              #+#    #+#             */
/*   Updated: 2025/09/25 12:46:42 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *base)
{
	int	count;

	count = 0;
	while (*base)
	{
		count++;
		base++;
	}
	return (count);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
/* ft_putnbr_base()
 *
 * Receives an integer (nbr) and a string (base)
 *
 * base_len: length of the base string, determines the system to use.
 * e.g. 10 → decimal, 2 → binary, 16 → hexadecimal, 8 → octal, etc.
 *
 * If nbr >= base_len, the function calls itself recursively
 * 	with nbr / base_len to process higher-order digits first.
 *
 * - nbr / base_len: reduces the number, moving to the next digit on the left.
 * - nbr % base_len: finds the index of the symbol for the current digit.
 *
 * Finally, base[nbr % base_len] is written to output.
 */

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!is_valid_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);
	return (0);
}*/
