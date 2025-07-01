#include <stdio.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int i = 0;
	
	while(str[i] != '\0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	char str[]="ferdaous el idrissi";
	char dest[20];
	printf("%s",ft_strncpy(dest,str,8));
	return(0);
}

