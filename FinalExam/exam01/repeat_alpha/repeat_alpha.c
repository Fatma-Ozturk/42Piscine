#include <unistd.h>

char	repeat_alpha(char x)
{
	int	cnt;

	if (x >= 'A' && x <= 'Z')
		cnt = x - 'A' + 1;
	else if (x >= 'a' && x <= 'z')
		cnt = x - 'a' + 1;
	else
		cnt = 1;
	return (cnt);
}

int	main(int ac, char **av)
{
	int	x;

	if (ac == 2)
	{
		while (*av[1])
		{
			x = repeat_alpha(*av[1]);
			while (x--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
