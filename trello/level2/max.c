int		max(int* tab, unsigned int len)
{
    int max;
    if(tab[0] == '\0')
        return(0);
    max = tab[len - 1];
    while(len--)
        if(tab[len] > max)
            max = tab[len];
    return(max);
}
#include<stdio.h>

int main()
{
    int tab[] = {1,4,5,8,0};
    printf("%d\n",max(tab,5));
    return(0);
}