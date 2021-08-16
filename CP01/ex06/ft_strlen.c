#include <unistd.h>
/*#include <stdio.h>
int ft_strlen(char *str);
int main()
{
	int count;
	char *str = "HASD";
	count = ft_strlen(str);
	printf("%d",count);
	return 0;
}*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
