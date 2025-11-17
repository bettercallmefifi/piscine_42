/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:22:15 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/16 18:31:41 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
        int a = 15;
        int b = 5;

        int div;
        int mod;

        ft_div_mod(a,b,&div,&mod);
        printf("div : %d\n end mod :%d\n",div,mod);
        return(0);
}
*/
