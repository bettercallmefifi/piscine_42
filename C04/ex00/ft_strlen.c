#include <stdio.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return(len);
}
int main()
{
	char str[] = "1337";
	int len = ft_strlen(str);
	printf("%d\n",len);
	return(0);
}
