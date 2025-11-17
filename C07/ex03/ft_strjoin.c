/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:21:59 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/27 16:09:21 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i])
		dest[len_dest++] = src[i++];
	dest[len_dest] = '\0';
	return (dest);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_str_len;
	int	sep_len;

	total_str_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
		total_str_len += ft_strlen(strs[i++]);
	return (total_str_len + sep_len * (size - 1) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = 0;
	if (size == 0)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(sizeof(char) * ft_total_length(size, strs, sep));
	if (!result)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char *words[] = {"Hello", "world", "this", "is", "C"};
    int size = 5;
    char *separator = " , ";
    char *result = ft_strjoin(size, words, separator);

    if (result == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    printf("Joined string: %s\n", result);
    
    free(result);
    return (0);
    }
*/
