/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:15:01 by jteh              #+#    #+#             */
/*   Updated: 2025/09/30 13:40:50 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*
 * ft_strdup
 *
 * Allocates sufficient memory for a copy of the string 'src'
 * Copies and returns a pointer to the duplicate.
 *
 * The duplicated string is null-terminated.
 *
 * Notes:
 * - If malloc() fails, the function returns NULL
 */
char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;
	int		i;

	i = 0;
	len = ft_strlen(src);
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*ori = "wahhaah how are you im fin dand thank you";
	char	*copy;

	copy = ft_strdup(ori);
	if (copy == NULL)
		return (1);
	printf("%s\n", ori);
	printf("%s", copy);

	free(copy);
	return (0);
}*/
