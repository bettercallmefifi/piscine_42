/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:14:02 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/18 13:40:51 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] = str[i + 1] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf("%s\n",str);
	return (0);
}
*/
