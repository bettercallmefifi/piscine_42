#include <stdio.h>

char	*ft_strcpy(char *dest, char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	char str[] = "ferdaous el idrissi";
	char dest[60];
	printf("%s",ft_strcpy(dest,str));
	return(0);
}
