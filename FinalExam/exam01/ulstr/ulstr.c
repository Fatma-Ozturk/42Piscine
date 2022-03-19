#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac == 2)
	{
		while (av[1][c] != '\0')
		{
			if (av[1][c] >= 'A' && av[1][c] <= 'Z')
			{
				av[1][c] += 32;
				write(1, &av[1][c], 1);
			}
			else if (av[1][c] >= 'a' && av[1][c] <= 'z')
			{
				av[1][c] -= 32;
				write(1, &av[1][c], 1);
			}
			else
				write(1, &av[1][c], 1);
			c++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
