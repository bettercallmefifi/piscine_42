#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while(str[len])
        len++;
    return(len);
}

char    *ft_strrev(char *str)
{
    int len = ft_strlen(str);
    int i = 0;
    int tmp;
    while(i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = tmp;
        i++;
        len--;
    }
    return(str);
}
#include<stdio.h>

int main()
{
    char str[] = "ferdaous";
    printf("%s\n",ft_strrev(str));
    return(0);
}