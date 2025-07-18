int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    i = 2;
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return 2;
    while (!ft_is_prime(nb))
        nb++;
    return nb;
}
#include <stdio.h>

int main()
{
	printf("%d\n",ft_find_next_prime(7));
	return(0);
}
