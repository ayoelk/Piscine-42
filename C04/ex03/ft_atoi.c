#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (sign * n);
}

int	main(void)
{
	char *n = "--34526bbbb6362";
	printf("My: %d\n", ft_atoi(n));
	printf("My: %d\n", atoi(n));
}