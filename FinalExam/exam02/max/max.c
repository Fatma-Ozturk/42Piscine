#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int	a;
	int	max;

	if (!len)
		return (0);
	a = 0;
	max = tab[0];
	while (a < len)
	{
		if (tab[a] > max)
			max = tab[a];
		a++;
	}
	return (max);
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {15, 2, 6, 99, 1};

	printf("%d", max(tab, 5));
	return (0);
}
