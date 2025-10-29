/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:57:35 by jteh              #+#    #+#             */
/*   Updated: 2025/09/18 15:36:13 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (*src != '\0' && size - 1 > 0)
		{
			*dest++ = *src++;
			size--;
		}
		*dest = '\0';
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[0];
	char	src[] = "Hello World";
	int	src_len;

	src_len = ft_strlcpy(dest, src, 0);
	printf("Source length: %d\n", src_len);
	printf("%s\n", src);
	printf("%s", dest);
}*/
