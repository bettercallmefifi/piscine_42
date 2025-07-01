#include <unistd.h>
#include <stdio.h>

char	ft_strrev(char *str)
{
	int len;
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	len = i - 1;
	while(len > 0)
	{
		write(1, &str[len],1);
		len--;
	}
	return(*str);
}

int main()
{
	char str[] = "ferdaous is the best";
	char result = ft_strrev(str);
	printf("%c\n",result);
	return(0);
}
