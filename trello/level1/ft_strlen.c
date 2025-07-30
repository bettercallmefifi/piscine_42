int ft_strlen(char *str)
{
    int len = 0;
    while(str[len])
    {
        len++;
    }
    return(len);
}

#include <stdio.h>

int main()
{
    char str[] = "ferdaous";
    printf("%d",ft_strlen(str));
    return(0);
}