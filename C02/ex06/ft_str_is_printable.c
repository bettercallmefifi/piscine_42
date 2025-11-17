/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:18:54 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/17 18:26:04 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "ferdoaus\nel\tidrissi";
	int rest = ft_str_is_printable(str);
	printf("%d\n",rest);
	return(0);
}*/
