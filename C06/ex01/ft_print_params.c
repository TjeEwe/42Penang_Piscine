#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	*ptr;

	i = 1;
	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
