#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmps;

	tmps = *a;
	*a = *b;
	*b = tmps;
}

