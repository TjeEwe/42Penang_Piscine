/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:12:49 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 18:13:28 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
			*str = *str - 32;
		str++;
	}
	return (start);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "helloworld";
	char	str3[] = "Hello";

	printf("Correct Test Case: %s\n", ft_strupcase(str1));
	printf("Correct Test Case: %s\n", ft_strupcase(str2));
	printf("Correct  Test Case: %s", ft_strupcase(str3));
	return (0);
}*/
