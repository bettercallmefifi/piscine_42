#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}
int main()
{
	char str[] = "ferdaous el Idrissi";
	char dest[] = "FerdAous";
	printf("%s\n",ft_strupcase(str));
	 printf("%s\n",ft_strupcase(dest));
	 return(0);
}
