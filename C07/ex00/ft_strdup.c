/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:03:18 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/27 13:26:47 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*arr;

	i = 0;
	len = ft_strlen(src);
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>

int	main()
{
	char src[] = "ferdaous";
	char *result;
	result = ft_strdup(src);
	printf("%s\n",result);
	free (result);
	return (0);
}
*/
