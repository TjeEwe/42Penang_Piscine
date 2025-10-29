/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:33:01 by jteh              #+#    #+#             */
/*   Updated: 2025/09/24 15:18:57 by jteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncat(dest, src, nb) appends up to nb chars from `src` to `dest`
 * Then, add 1 null terminator '\0'
 * Does not know buffer size
 * Might cause overflow */
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

/*#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
        char    *res;
        char    buffer[15] = "destabcd";

        if (argc == 3)
        {
                res = ft_strncat(argv[1], argv[2], 4);
                printf("%s\n", res);
                printf("%s", strncat(buffer, "src", 4));
        }
        return (0);
}*/
