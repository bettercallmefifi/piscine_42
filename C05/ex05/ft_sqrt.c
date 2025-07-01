#include <stdio.h>

int ft_sqrt(int nb)
{
	int i = 0;

	if(nb < 0)
		return 0;
	while(i * i <= nb && nb >= 0 && i <= 46340)
	{
		if(i * i == nb)
			return(i);
		i++;
	}
}
int main()
{
	printf("%d\n",ft_sqrt(9));
	return(0);
}
