#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int len = ft_strlen(dest);
	while(src[i])
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
	char s[] = "el idrissi";
	char ss[30] = "ferdaous ";
	printf("%s\n",ft_strcat(ss,s));
	return(0);
}

