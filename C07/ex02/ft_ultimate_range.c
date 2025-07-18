#include <stdio.h>
#include <stdlib.h>

int     ft_ultimate_range(int **range,int min, int max)
{
    int *arr;
    int i = 0;
    int size = max - min;

    if(min >= max)
    {
        *range = NULL;
        return(0);

    }
    arr = (int*)malloc(sizeof(int)* size);
    if(!arr)
        return -1;
    while(i < size)
    {
        arr[i] = min + i;
        i++;
    }
    *range = arr;
    return(size);
}

int main()
{
    int *tab;
    int size;
    int i;

    size = ft_ultimate_range(&tab, 3, 8);

    if (size > 0)
    {
        for (i = 0; i < size; i++)
            printf("%d ", tab[i]);
        free(tab);
    }
    else if (size == 0)
        printf("Empty range\n");
    else
        printf("Error allocating memory\n");

    return 0;
}
