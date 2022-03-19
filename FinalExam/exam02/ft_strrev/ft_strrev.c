#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strrev(char *str)
{
	int		a;
	int		len;
	char	x;

	a = 0;
	len = ft_strlen(str) - 1;
	while (len > a)
	{
		x = str[a];
		str[a] = str[len];
		str[len] = x;
		a++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*p1;
	char	str[] = "fatma";
	p1 = str;
	printf("%s\n", ft_strrev(p1));
	return (0);
}
