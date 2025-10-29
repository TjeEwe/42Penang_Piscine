/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 18:17:08 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
			*str = *str + 32;
		str++;
	}
	return (start);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "helLO WORLD";
	char	str3[] = "HellO";

	printf("Correct Test Case: %s\n", ft_strlowcase(str1));
	printf("Correct Test Case: %s\n", ft_strlowcase(str2));
	printf("Correct  Test Case: %s", ft_strlowcase(str3));
	return (0);
}*/
