#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1,str,1);
        str++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;

    if(argc >= 2)
    {
        while(i < argc)
        {
            ft_putstr(argv[i]);
            write(1,"\n",1);
            i++;
        }
    }
    return(0);
}