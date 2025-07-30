void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

#include <stdio.h>

int main()
{
    int a = 42;
    int b = 1337;

    int *p;
    int *ptr;

    p = &a;
    ptr = &b;

    ft_swap(p,ptr);
    printf("%d\n%d",a,b);
    return(0);
}