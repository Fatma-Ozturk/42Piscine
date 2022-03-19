#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;

	b = 0;
	a = ac - 1;
	if (ac > 1)
		while (av[a][b])
		{
			write(1, &av[a][b], 1);
			b++;
			write(1, "\n", 1);
		}
	return (0);
}

