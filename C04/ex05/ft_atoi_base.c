#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int	doublechar(char *base)
{
	int i;
	int j;
	int value = ft_strlen(base);
	i = 0;
	if(base[0] == '\0' || value == 1)
		return(1);

	while(base[i] != '\0')
	{
		j = i + 1;
		while(base[j] != '\0')
		{
			if(base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return(0);
}

int    check(char c, char *base)
{
    int    j;
    int    len;

    j = 0;
    len = ft_strlen(base);
    while (j < len)
    {
        if (c == base[j])
            return (j);
        j++;
    }
    return (-1);
}

int	ft_atoi_base(char *str,char *base)
{
	int base_value = 0;
	while(base[base_value])
	{
		if(base[base_value] == '+'|| base[base_value] == '-'
				|| base[base_value] == ' '
				|| (base[base_value] >= 9 && base[base_value] <= 13) || base[base_value] == 127)
			return(0);
		base_value++;
	}
	if(base_value < 2)
		return(0);
	if(doublechar(base))
		return(0);

	int i = 0;
	int result = 0;
	int signe = 1;
	while(str[i] == ' ' ||(str[i] <= 9 && str[i] >= 13))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			signe *= -1;
		i++;
	}
	while(str[i])
	{
		int j = check(str[i],base);
		if(j == -1)
			break;
		
		result = result * ft_strlen(base) + j;
		i++;
	}
	return(result * signe);
}
#include <stdio.h>
int main()
{
	char str[] = "-+-1337is";
	char base[] = "0123";
	int result = ft_atoi_base(str,base);
	printf("%d\n",result);
	return(0);
}

