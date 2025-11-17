/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:33:24 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/20 18:29:22 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char	str[] = "El idrissi";
	char	dest[] = "Ferdaous ";
	ft_strcat(dest,str);
	printf("%s\n",dest);

	return (0);
}
*/
