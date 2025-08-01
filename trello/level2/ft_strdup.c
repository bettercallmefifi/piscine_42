#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int  len = 0;
    while(str[len])
        len++;
    return(len);
}
char    *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *rest = malloc(len + 1);

    if(!rest)
        return(NULL);
    while(src[i])
    {
        rest[i] = src[i];
        i++;
    }
    rest[i] = '\0';
    return(rest);
}

int main(){
    
    char str[] = "hey ferdaous";
    char *rest ;
    rest = ft_strdup(str);
    printf("%s\n",rest);
    return(0);
}