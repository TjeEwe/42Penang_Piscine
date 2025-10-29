/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 16:11:48 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	char	*str2 = "1234";
	char	*str3 = "Hello123";

	printf("Correct Test Case: %d\n", ft_str_is_numeric(str1));
	printf("Correct Test Case: %d\n", ft_str_is_numeric(str2));
	printf("Wrong Test Case: %d", ft_str_is_numeric(str3));
	return (0);
}*/
