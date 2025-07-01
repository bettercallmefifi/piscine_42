#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int len = ft_strlen(dest);
	unsigned int i = 0;

	while(src[i] != '\0' && i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return(dest);
}

int main()
{
	char str[] = "el idrissi";
	char dest[30]="ferdaous ";

	printf("%s\n",ft_strncat(dest,str,4));
	return(0);
}
