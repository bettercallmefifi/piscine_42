#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int len = 0;
	while(src[len] != '\0')
	{
		len++;
	}
	if(size == 0)
		return(len);

	while(i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(len);
}
int main()
{
	char str[] = "ferdaous el idrissi her birthday 2004/04/10";
	char dest[50];
	unsigned int len = ft_strlcpy(dest,str,sizeof(dest));
	printf("%s\n",dest);
	printf("%u\n",len);
	return(0);
}
