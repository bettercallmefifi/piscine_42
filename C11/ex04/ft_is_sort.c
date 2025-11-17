/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:14:49 by feel-idr          #+#    #+#             */
/*   Updated: 2025/09/03 21:11:42 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_asc;
	int	is_desc;

	is_asc = 1;
	is_desc = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			is_asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			is_desc = 0;
		i++;
	}
	if (is_asc || is_desc)
		return (1);
	else
		return (0);
}
