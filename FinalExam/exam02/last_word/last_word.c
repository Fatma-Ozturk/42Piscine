#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	a = 0;
	while (av[1][a])
		a++;
	a -= 1;
	if (ac == 2)
	{
		while (av[1][a] == '\t' || av[1][a] == ' ')
			a--;
		while (a > 0)
		{
			if (av[1][a] == ' ' || av[1][a] == '\t')
				break ;
			a--;
		}
		a++;
		while (av[1][a] != '\0' && av[1][a] != ' ' && av[1][a] != '\t')
		{
			write(1, &av[1][a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
	if (ac >= 3)
		write(1, "\n", 1);
}
