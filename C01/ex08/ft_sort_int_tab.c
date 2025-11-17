/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:03:33 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/16 19:31:17 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
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
