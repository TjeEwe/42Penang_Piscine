/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:21:11 by jteh              #+#    #+#             */
/*   Updated: 2025/09/17 18:37:36 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_upper(char *str)
{
	*str = *str - 32;
}

void	to_lower(char *str)
{
	*str = *str + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	is_word;
	int	is_first;

	is_word = 1;
	is_first = 1;

}
