/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:14:07 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/27 19:17:11 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*revstring(char *rest, int j, char *result, int i)
{
	while (--i >= 0)
		result[j++] = rest[i];
	result[j] = '\0';
	return (result);
}

int	double_char(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return (0);
		base_len++;
	}
	if (base_len < 2 || base[0] == '\0')
		return (0);
	if (double_char(base) == 1)
		return (0);
	return (base_len);
}

char	*print_putnbr(long int nbr, char *base, int check, int flag)
{
	int		i;
	char	rest[34];
	char	*result;
	int		j;

	i = 0;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		rest[i++] = base[nbr % check];
		nbr = nbr / check;
	}
	result = (char *)malloc(i);
	j = 0;
	if (flag == 0)
	{
		result[0] = '-';
		j++;
	}
	return (revstring(rest, j, result, i));
}

char	*ft_putnbr_base(int nb, char *base)
{
	int			check;
	long int	nbr;
	int			sign;
	char		*res;

	if (nb == 0)
	{
		res = malloc(2);
		res[0] = base[0];
		res[1] = '\0';
		return (res);
	}
	sign = 1;
	check = check_base(base);
	nbr = nb;
	if (check == 0)
		return (0);
	if (nb < 0)
		sign = 0;
	res = print_putnbr(nbr, base, check, sign);
	return (res);
}
