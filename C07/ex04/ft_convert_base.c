/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:14:25 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/30 21:53:17 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nb, char *base);

int	valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	is_digit(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	digit;
	int	i;
	int	len;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	result = 0;
	len = valid(base);
	while (is_digit(base, str[i]) != -1)
	{
		digit = is_digit(base, str[i]);
		result = result * len + digit;
		i++;
	}
	return (sign * result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*rest;

	if (!valid(base_from) || !valid(base_to))
		return (NULL);
	rest = malloc(34);
	nb = ft_atoi_base(nbr, base_from);
	rest = ft_putnbr_base(nb, base_to);
	return (rest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("\n%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
*/
