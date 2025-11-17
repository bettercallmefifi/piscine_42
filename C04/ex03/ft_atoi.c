/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:35:29 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/21 14:05:02 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	rest;

	i = 0;
	signe = 1;
	rest = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rest = rest * 10 + (str[i] - '0');
		i++;
	}
	return (signe * rest);
}
/*
#include <stdio.h>

int main()
{
	char str[]= "     -+----1337f42";
	int result = ft_atoi(str);
	printf("%d\n",result);
	return (0);
}*/
