/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 17:44:23 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 33 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "i0;;AJSFOIJFvjsdlsdfjPMASOJAEWOFJ";
	char	*str3 = "	";

	printf("Correct Test Case: %d\n", ft_str_is_printable(str1));
	printf("Correct Test Case: %d\n", ft_str_is_printable(str2));
	printf("Wrong Test Case: %d", ft_str_is_printable(str3));
	return (0);
}*/
