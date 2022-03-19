#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("fatma", "fat"));
}
