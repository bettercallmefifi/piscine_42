#include <stdio.h>
#include <stdlib.h>
int ft_do_op(char argv, int n1, int n2)
{
    int result = 0;
    if(argv == '+')
        result = n1 + n2;
    else if(argv == '-')
        result = n1 - n2;
    else if(argv == '/')
        result = n1 / n2;
    else if(argv == '*')
        result = n1 * n2;
    else if(argv == '%')
        result = n1 % n2;
    return(result);
}

int main(int argc, char **argv)
{
    int n1;
    int n2;
    int result ;
    if(argc == 4)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[3]);
        result = ft_do_op(argv[2][0],n1,n2);
        printf("%d",result);
    }
    printf("\n");
    return(0);
}