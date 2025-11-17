/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:07:10 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/20 18:11:56 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = (unsigned int)ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
    char str[]="ferdaous ";
    char dest[30] = "el idrissi";
    
    char *result = ft_strncat(dest,str,20);
    printf("%s\n",result);
    return(0);

}
*/
