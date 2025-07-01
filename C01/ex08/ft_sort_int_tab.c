
void	 ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int tmp;
	int j;

	while(i < size - 1)
	{
		j = 0;
		while( j < size - 1 - i)
		{
			
			if(tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int sort[] = {2,4,7,1,6};
	ft_sort_int_tab(sort,5);
	for(int i =0; i< 5 ;i++)
	 {
		 printf("%d",sort[i]);
	 }
	 return(0);
}
*/