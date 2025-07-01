#include <unistd.h>

void    ft_print_reverse_alphabet()
{
    char n = 'z';
    while(n >= 'a')
    {
        write(1,&n,1);
        n--;
    }
}

int main()
{
    ft_print_reverse_alphabet();
    return(0);

}