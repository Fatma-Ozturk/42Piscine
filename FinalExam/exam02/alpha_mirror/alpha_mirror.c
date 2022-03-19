#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	if (ac == 2)
	{
		a = 0;
		while (av[1][a])
		{
			if (av[1][a] >= 'a' && av[1][a] <= 'z')
				av[1][a] = 'z' - (av[1][a] - 'a');
			else if (av[1][a] >= 'A' && av[1][a] <= 'Z')
				av[1][a] = 'Z' - (av[1][a] - 'A');
			write(1, &av[1][a], 1);
			a++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
