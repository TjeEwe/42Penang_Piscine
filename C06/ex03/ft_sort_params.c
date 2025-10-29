#include <unistd.h>

void	print_params(int argc, char **argv);

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;
	char	**ptr;

	i = 1;
	while (i <= argc - 1)
	{
		j = 1;
		while (j <= argc - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	print_params(argc, argv);
}

void	print_params(int argc, char **argv)
{
	int		i;
	char	*p;

	i = 1;
	while (i < argc)
	{
		p = argv[i];
		while (*p)
		{
			write(1, p, 1);
			p++;
		}
		write(1, "\n", 1);
		i++;
	}
}
/*
* char **argv -> array of string pointer
* int  **ptr  -> array of row pointer
* 
* *argv -> first string
* *ptr  -> first row
*
* **argv -> first char
* **ptr  -> first int (in the first row)
*/
