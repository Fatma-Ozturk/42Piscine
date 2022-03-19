#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][c] != '\0')
	{
		if (av[1][c] == av[2][0])
			av[1][c] = av[3][0];
		write(1, &av[1][c], 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
