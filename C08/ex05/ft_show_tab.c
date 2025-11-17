/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:31:58 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/31 13:49:00 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr (n / 10);
	}
	ft_putchar ((n % 10) + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str)
	{
		ft_putstr (par[index].str);
		ft_putchar ('\n');
		ft_putnbr (par[index].size);
		ft_putchar ('\n');
		ft_putstr (par[index].copy);
		ft_putchar ('\n');
		index++;
	}
}
