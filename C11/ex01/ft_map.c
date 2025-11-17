/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:48:58 by feel-idr          #+#    #+#             */
/*   Updated: 2025/09/03 14:54:02 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new;

	i = 0;
	new = (int *)malloc(sizeof(int) * length);
	if (!new)
		return (NULL);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
