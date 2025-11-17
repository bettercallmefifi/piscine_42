/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:33:41 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/17 21:03:51 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "ferdaous wants to be the top 1";
	char dest[20];
	unsigned int len = ft_strlcpy(dest,str,10);
	printf("len :%d\ndest :%s\n",len,dest);
	return (0);
}*/
