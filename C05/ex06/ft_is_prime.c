/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 09:43:11 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/26 09:51:15 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n", ft_is_prime(9));   // Output: 0 (9 is not prime)
    printf("%d\n", ft_is_prime(4));   // Output: 0 (4 is not prime)
    printf("%d\n", ft_is_prime(2));   // Output: 1 (2 is prime)
    printf("%d\n", ft_is_prime(-3));  // Output: 0 
    printf("%d\n", ft_is_prime(7));   // Output: 1 (7 is prime)
    return (0);
}*/
