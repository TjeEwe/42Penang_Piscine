/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:13:14 by jteh              #+#    #+#             */
/*   Updated: 2025/09/24 14:48:03 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*src;
	char	*res;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		src = str;
		res = to_find;
		while (*src && *res && *src == *res)
		{
			src++;
			res++;
		}
		if (*res == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char *res;

	if (argc == 3)
	{
		res = ft_strstr(argv[1], argv[2]);
		printf("%s\n", res);
		printf("%s", strstr(argv[1], argv[2]));
	}
}*/
