/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:59:21 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/24 13:33:05 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int				i;
	char			rest[20];
	long long int	nbr;

	i = 0;
	nbr = nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	while (nbr >= 10)
	{
		rest[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	if (nbr <= 9)
		rest[i] = nbr + '0';
	while (i >= 0)
	{
		write(1, &rest[i], 1);
		i--;
	}
}
/*
int main()
{
	ft_putnbr(-2147483648);
	return(0);
}
*/
