#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putnb(int nb)
{
    long long int n;
    n = nb;
    if(n < 0)
    {
        write(1,"-",1);
        n *= -1; 
    }
    if(n < 10)
    {
        n = n + '0';
        write(1,&n,1);
    }
    else
    {
        ft_putnb(n / 10 + '0');
        ft_putnb(n % 10 + '0');
    }
}

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while(par[i].str)
    {
        ft_putstr(par[i].str);
        write(1,"\n",1);
        ft_putnb(par[i].size);
        write(1,"\n",1);
        ft_putstr(par[i].copy);
        write(1,"\n",1);
        i++;
    }
}