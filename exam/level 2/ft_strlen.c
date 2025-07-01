#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
return(i);
}

int main()
{
	char str[]="ferdaous";
	int result = ft_strlen(str);
	printf("%d\n",result);
	return(0);
}
