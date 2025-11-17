/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:07:17 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/24 00:43:12 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	check_base(char	*base)
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

void	print_putnbr(long int nbr, char *base, int check)
{
	int		i;
	char	rest[60];

	i = 0;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		rest[i++] = base[nbr % check];
		nbr = nbr / check;
	}
	i--;
	while (i >= 0)
		write(1, &rest[i--], 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int			check;
	long int	nbr;

	check = check_base(base);
	nbr = nb;
	if (check == 0)
		return ;
	print_putnbr(nbr, base, check);
}
/*
int main(void)
{
    ft_putnbr_base(42, "01");       // Binary representation
    write(1, "\n", 1);
    ft_putnbr_base(42,"0123456789ABCDEF"); // Hexadecimal representation
    write(1, "\n", 1);
    ft_putnbr_base(-42,"0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(42, "01234567");   // Octal representation
    write(1, "\n", 1);
    ft_putnbr_base(42, "poneyvif");  // Custom base
    write(1, "\n", 1);
    return 0;
}*/
