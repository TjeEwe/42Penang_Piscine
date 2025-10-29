/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:51:31 by jteh              #+#    #+#             */
/*   Updated: 2025/09/18 16:50:14 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_hex(char *str)
{
	char	ptr[16];
	char	buf[2];

	ptr[0] = '0';
	ptr[1] = '1';
	ptr[2] = '2';
	ptr[3] = '3';
	ptr[4] = '4';
	ptr[5] = '5';
	ptr[6] = '6';
	ptr[7] = '7';
	ptr[8] = '8';
	ptr[9] = '9';
	ptr[10] = 'A';
	ptr[11] = 'B';
	ptr[12] = 'C';
	ptr[13] = 'D';
	ptr[14] = 'E';
	ptr[15] = 'F';
	ptr[16] = '\0';
	buf[0] = ptr[*str / 16];
	buf[1] = ptr[(*str % 16)];
	write(1, buf, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write (1, "\\", 1);
			write_hex(str);
		}
		str++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello\nHow are you?";
	
	ft_putstr_non_printable(src);
}*/
