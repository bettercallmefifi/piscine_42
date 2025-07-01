#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return(s1[i] - s2[i]);
}

int main()
{
	char s1[]= "ferdaouse";
	char s2[] = "ferdaous";
	int result = ft_strcmp(s1,s2);
	printf("%d",result);
	return(0);
}

