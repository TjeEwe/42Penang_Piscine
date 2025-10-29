/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 16:25:53 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char	*str2 = "HELLO";
	char	*str3 = "Hello123";

	printf("Correct Test Case: %d\n", ft_str_is_uppercase(str1));
	printf("Correct Test Case: %d\n", ft_str_is_uppercase(str2));
	printf("Wrong Test Case: %d", ft_str_is_uppercase(str3));
	return (0);
}*/
