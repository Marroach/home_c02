#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str [i] <= 122))
        {
        str[i] -= 32;
		}
		i++;
	}	
	return (str);
}
int	main()
{
	printf("%d", ft_strupcase("\n"));
	printf("\n%d", ft_strupcase("<<>?{@$&}"));
	printf("\n%d", ft_strupcase("\t 1*"));
}