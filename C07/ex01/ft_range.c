#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *rest;
    int len_arr = max - min;
    int i = 0;
    if(min > max)
        return NULL;
    rest = malloc(sizeof(int) * len_arr);
    if(!rest)
        return NULL;
    while(min < max)
    {
        rest[i] = min;
        i++;
        min++;
    }
    return(rest);
}

int main()
{
    int *rest = ft_range(0,12);
    int i = 0;
    if(rest == NULL)
        return(1);
    while(i < 12 - 0)
    {
        printf("%d",rest[i]);
        i++;
    }
    printf("\n");
    free(rest);
    return(0);
}