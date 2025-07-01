#include <stdio.h>


void	 ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int i = 42;
	int j = 1337;

	int *p ;
	int *ptr;

	p = &i;
	ptr = &j;

	ft_swap(p,ptr);

	printf("i = %d et j = %d\n",i,j);
	return(0);
}
