#include <unistd.h>

void    ft_print_numbers(void)
{
    int n = '0';
    while(n <= '9')
    {
        write(1,&n,1);
        n++;
    }
}
int main()
{
    ft_print_numbers();
    return 0;
}