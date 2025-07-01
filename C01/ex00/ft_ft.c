#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int a;
	int *ptr;
	ptr = &a;
	ft_ft(ptr);
	printf("%d\n",a);
	return(0);
}
