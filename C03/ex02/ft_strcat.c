/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:32:33 by jteh              #+#    #+#             */
/*   Updated: 2025/09/23 12:27:36 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*res;
	char	buffer[100] = "Hello";

	if (argc == 3)
	{
		res = ft_strcat(argv[1], argv[2]);
		printf("%s\n", res);
		printf("%s", strcat(buffer, "World"));
	}
	return (0);
}*/
