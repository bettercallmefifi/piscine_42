#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int signe = 1;

	while(str[i] == ' '|| (str[i] >= '9' && str[i] <= '0'))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			signe *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(signe * result);
}

int main()
{
	char str[] = "----+--+1337h1337";
	int result = ft_atoi(str);
	printf("%d\n",result);
	return(0);
}

