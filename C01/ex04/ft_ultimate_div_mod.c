/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:32:19 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/16 18:41:45 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main()
{
	int a = 15;
	int b = 5;

	int *p1;
	int *p2;

	p1 = &a;
	p2 = &b;

	ft_ultimate_div_mod(p1,p2);
	printf("a :%d\nb :%d\n",a,b);
	return(0);
}
*/
