/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:00:48 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/25 18:05:57 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(3));
	return (0);
}*/
