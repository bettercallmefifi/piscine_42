/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:43:13 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/27 13:47:32 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!arr)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (len);
}
/*
int main(void)
{
    int *range;
    int min = 3;
    int max = 10;
    int length;
    int i;

    length = ft_ultimate_range(&range, min, max);
    if (length == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    if (length == 0)
    {
        printf("Empty range\n");
        return 0;
    }

    printf("Range length: %d\n", length);
    printf("Range values: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}
*/