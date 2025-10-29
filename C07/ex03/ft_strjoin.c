/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:42:16 by jteh              #+#    #+#             */
/*   Updated: 2025/09/30 16:43:48 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
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

/* Avoid to use while (arr[i])
 *
 * while (arr[i]) means continue loops until a null terminator is found
 *
 * But if there is no NULL terminator, then it will cause seg fault
 */
int	calc_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	join_ops(int size, char **strs, char *sep, char *temp)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			temp[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				temp[k++] = sep[j++];
		}
		i++;
	}
	temp[k] = '\0';
}

/* strjoin() joins strs with sep (separator) together
 *
 * we use 1 while loop to control the total num to copy str
 * 	from strs.
 *
 * 2 while loop use to copy str from strs and sep
 */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		len;

	len = calc_total_len(size, strs, sep);
	temp = malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	join_ops(size, strs, sep, temp);
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hello", "How", "Are", "You"};
	char	*sep = "haha";
	char	*res = ft_strjoin(4, strs, sep);

	printf("%s", res);
	free(res);
	return (0);
}*/
