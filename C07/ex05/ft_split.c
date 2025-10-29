/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:11:55 by jteh              #+#    #+#             */
/*   Updated: 2025/10/02 16:36:03 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (!is_sep(*str, charset) && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (is_sep(*str, charset))
			is_word = 0;
		str++;
	}
	return (count);
}

int	ft_strlen(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && !is_sep(str[i], charset))
	{
		len++;
		i++;
	}
	return (len);
}

void	skip_sep(char **str, char *charset)
{
	while (**str && is_sep(**str, charset))
		(*str)++;
}

char	**ft_split(char *str, char *charset)
{
	int		w_count;
	int		w_len;
	char	**temp;
	int		i;
	int		j;

	i = 0;
	skip_sep(&str, charset);
	w_count = count_word(str, charset);
	temp = malloc((sizeof(char *) * w_count) + 1);
	while (i < w_count)
	{
		w_len = ft_strlen(str, charset);
		temp[i] = malloc((sizeof(char) * w_len) + 1);
		j = 0;
		while (j < w_len)
		{
			temp[i][j++] = *str;
			str++;
		}
		temp[i][j] = '\0';
		skip_sep(&str, charset);
		i++;
	}
	temp[i] = NULL;
	return (temp);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char **temp = ft_split(argv[1], argv[2]);
		char **p = temp;
		while (*p)
		{
			printf("%s\n", *p);
			p++;
		}
	}
	return (0);
}*/
