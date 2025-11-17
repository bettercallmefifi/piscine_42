/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:52:53 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/16 22:06:58 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int tab[] = {1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(tab,9);

	for(int i = 0;i < 9;i++)
	{
		printf("%d",tab[i]);
	}
	return(0);
}
*/
