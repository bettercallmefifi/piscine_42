int max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
#include <stdio.h>

int main()
{
	int tab[] = {1,4,3,2};
	unsigned int len = 4;
	int maxi = max(tab, len);
	printf("%d",maxi);
	return(0);
}