/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:10:15 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/26 10:25:48 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rest;

	rest = 1;
	if (power < 0)
		return (0);
	while (0 < power)
	{
		rest = rest * nb;
		power--;
	}
	return (rest);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n",ft_iterative_power(-8,2));
}
*/
