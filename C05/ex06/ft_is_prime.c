#include <stdio.h>

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

int main()
{
    printf("%d\n", ft_is_prime(9));   // Output: 0 (9 is not prime)
    printf("%d\n", ft_is_prime(4));   // Output: 0 (4 is not prime)
    printf("%d\n", ft_is_prime(2));   // Output: 1 (2 is prime)
    printf("%d\n", ft_is_prime(-3));  // Output: 0 (negative numbers are not prime)
    printf("%d\n", ft_is_prime(7));   // Output: 1 (7 is prime)
    return (0);
}
