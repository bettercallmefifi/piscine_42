/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:12:45 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/27 13:26:20 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	i = 0;
	if (!arr)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (max > min)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main()
{
	int *tab;
	int i = 0;

	tab = ft_range(-1, 4);
	for(i = 0; i < 4 - (-1);i++)
	{
		printf("%d",tab[i]);
	}
	free (tab);
	return(0);
}
*/