#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && i <= n)
		i++;
	return(s1[i] - s2[i]);
}

int main()
{
	char s1[] = "ferdaouselidrissi";
	char s2[] = "ferdaous el idrissi";

	int result = ft_strncmp(s1,s2,10);
	printf("%d",result);
	return(0);
}
