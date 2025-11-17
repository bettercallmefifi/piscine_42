/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:12:06 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/16 20:26:50 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	nbr;
	char		rest[200];
	int			i;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
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
	ft_putnbr(-42);
	return(0);
	}
*/
