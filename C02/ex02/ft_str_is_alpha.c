/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 16:05:21 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
	char	*str2 = "Hello";
	char	*str3 = "Hello1World";

	printf("Correct Test Case: %d\n", ft_str_is_alpha(str1));
	printf("Correct Test Case: %d\n", ft_str_is_alpha(str2));
	printf("Wrong Test Case: %d", ft_str_is_alpha(str3));
	return (0);
}*/
