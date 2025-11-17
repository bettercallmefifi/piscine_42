/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:21:28 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/19 11:56:19 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;
	char			*arr;

	i = 0;
	arr = "0123456789abcdef";
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &arr[c / 16], 1);
			write(1, &arr[c % 16], 1);
		}
		i++;
	}
}
/*
#include <stdio.h>
int main(){
    char str[] = "afawd\ndawd";
    ft_putstr_non_printable(str);
    //write(1, "\n", 1);
}
*/
