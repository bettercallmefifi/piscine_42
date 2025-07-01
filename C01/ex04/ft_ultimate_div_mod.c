#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main()
{
	int a = 15;
	int b = 3;

	int *p;
	int *ptr;

	p = &a;
	ptr = &b;
	ft_ultimate_div_mod(p,ptr);
	printf("a : %d et b = %d\n",*p,*ptr);
	return(0);
}
