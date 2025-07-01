#include <stdio.h>

void	ft_rev_int_tab(int *tab,int size)
{
	int i = 0;
	int tb;

	while(i < (size /2))
	{
		tb = tab[size-1];
		tab[size-1] = tab[i];
		tab[i] = tb;

		i++;
		size--;
	}
}
int main()
{
	int str[]= {1,7,4,9,3,2};
	ft_rev_int_tab(str,6);
	for(int i = 0; i < 6;i++)
	{
		printf("%d",str[i]);
	}
	return(0);
}
