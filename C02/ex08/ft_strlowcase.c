#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char str[] = "FERDAOUS";
	char src[] = "FEdaOU2";
	printf("%s\n",ft_strlowcase(str));
	printf("%s\n",ft_strlowcase(src));
	return(0);
}
