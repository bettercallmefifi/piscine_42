/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:29:02 by feel-idr          #+#    #+#             */
/*   Updated: 2025/09/04 21:17:37 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	char	*temp;
	int		i;
	int		j;
	int		size;

	size = 0;
	while (tab[size] != 0)
		size++;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*#include <stdio.h>

int    main(void)
{
    char *tab[] = {
        "banana",
        "apple",
        "dorange",
        "cgrape",
        "epear",
        0
    };
    int i = 0;

    printf("Before sorting:\n");
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }

    ft_sort_string_tab(tab);

    printf("\nAfter sorting:\n");
    i = 0;
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return (0);
}*/