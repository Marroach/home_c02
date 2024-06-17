#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str [i] <= 57))
        {
        return (0);
        }
		i++;
	}	
	return (1);
}
int	main()
{
	printf("%d", ft_str_is_numeric("aaaaa"));
	printf("\n%d", ft_str_is_numeric("1234566"));
	printf("\n%d", ft_str_is_numeric("-1111*"));
}