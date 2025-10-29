/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:54:03 by jteh              #+#    #+#             */
/*   Updated: 2025/09/24 15:47:34 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*ft_strlcat(dest, src, buffersize(dest))
 *
 * Tries to append AS MUCH AS of `src` to `dest`
 * If buffer too small, copies fewer 
 *
 * Add NULL terminator (using strncat)
 *
 * Returns: ft_strlen(dest_before) + ft_strlen(src)
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	copy_size;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len > src_len)
		return (size + src_len);
	copy_size = size - dest_len - 1;
	if (copy_size > 0)
		ft_strncat(dest, src, copy_size);
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
		char	buf1[10] = "Hello";
		//char	buf2[10] = "Hello";

		unsigned int	ret1 = ft_strlcat(buf1, "World", sizeof(buf1));
		//unsigned int	ret2 = strlcat(buf1, "World", sizeof(buf2));

		printf("%d", ret1);
		//printf("%d", ret2);
}*/
