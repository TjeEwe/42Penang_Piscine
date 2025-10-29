/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:15:06 by jteh              #+#    #+#             */
/*   Updated: 2025/09/18 18:20:54 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	res;
	int	size;
	
	size = atoi(argv[3]);
	if (argc == 4)
		res = ft_strncmp(argv[1], argv[2], size);
	printf("Result: %d", res);
}
