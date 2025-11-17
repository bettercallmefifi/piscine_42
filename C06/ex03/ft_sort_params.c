/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:29:45 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/25 11:33:07 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*swp;

	i = 0;
	while (++i < argc -1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swp = argv[i];
			argv[i] = argv[1 + i];
			argv[1 + i] = swp;
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
}
