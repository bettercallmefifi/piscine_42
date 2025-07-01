char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;

	if(to_find[0] == '\0')
		return(str);

	while(str[i] != '\0')
	{
		while(str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if(to_find[j] == '\0')
			return(&str[i]);
		i++;
	}
	return(0);
}
#include <stdio.h>

int main()
{
	char str[] = "ferdaous el idrissi";
	char src[] = "el";
	char *result = ft_strstr(str,src);
	printf("%s\n",result);
	return(0);
}

