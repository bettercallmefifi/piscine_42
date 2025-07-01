#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return(0);
	if(nb == 0 && power == 0)
		return 1;
	if(power == 0)
		return(1);
	return nb * ft_recursive_power(nb,power-1);
}
int main()
{
	printf("%d\n",ft_recursive_power(6,2));
	return(0);
}
