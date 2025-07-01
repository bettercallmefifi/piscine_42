#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int f = 1;
    int i = 1;
    if(nb < 0)
    {
        return(0);
    }
    if (nb ==0)
        return(1);
    while(nb > 0)
    {
        f = f * nb ;
        nb--;
    }
    return(f);
}

int main()
{
    int nb = 6;
    printf("%d",ft_iterative_factorial(nb));
    return(0);
}