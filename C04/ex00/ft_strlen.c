#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int ft_strlen(char *str);

// int main(void)
// {
//     char *test = "Bonjjjjjour";

//     printf("%d\n", ft_strlen(test));
//     return (0);
// }