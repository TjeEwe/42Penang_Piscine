/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 16:26:49 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
	char	*str2 = "helloworld";
	char	*str3 = "Hello123";

	printf("Correct Test Case: %d\n", ft_str_is_lowercase(str1));
	printf("Correct Test Case: %d\n", ft_str_is_lowercase(str2));
	printf("Wrong Test Case: %d", ft_str_is_lowercase(str3));
	return (0);
}*/
