/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:06:21 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 15:12:05 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start;
	unsigned int	count;

	start = dest;
	count = 0;
	while (*src != '\0' && count < n)
	{
		*dest++ = *src++;
		count++;
	}
	while (count < n)
	{
		*dest++ = '\0';
		count++;
	}
	return (start);
}

/*int	main(void)
{
	char	*ori = "Hello, How are you?";
	char	*result;
	char	dest[100];
	int		i;

	result = ft_strncpy(dest, ori, 100);
	printf("After copying: %s\n", result);
	i = 0;
	while (i < 100)
	{
		if (dest[i] == '\0')
			printf("\\0 ");
		else
			printf("%c", dest[i]);
		i++;
	}
	return (0);
}*/
