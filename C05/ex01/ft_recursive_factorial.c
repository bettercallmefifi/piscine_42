#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if(nb == 0)
        return(1);
    if(nb < 0)
        return(0);  
    return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
    int nb = 6;
    int f = ft_recursive_factorial(nb);
    printf("%d",f);
    return(0);
}