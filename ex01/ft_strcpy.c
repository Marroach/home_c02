#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "123456789";
	char dest[] = "abcdefghi";
	
	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 6));
	printf("%s", ft_strncpy(dest, src, 9));
}