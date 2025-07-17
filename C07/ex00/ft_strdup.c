
#include <stdio.h>

#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

char    *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *rest = malloc(len + 1);
    int j = 0;
    if(!rest)
        return NULL;
    while(src[j])
    {
        rest[j] = src[j];
        j++;
    }
    rest[j] = '\0';
    return(rest);
}
int main(){
    char src[]= "hey ferdaous";
    char *rest;
    rest = ft_strdup(src);
    printf("%s\n", rest);
    free(rest);
}