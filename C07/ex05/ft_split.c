/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 23:17:26 by feel-idr          #+#    #+#             */
/*   Updated: 2025/08/30 23:17:44 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char sep)
{
	return (c == sep);
}

int	count_words(const char *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && is_sep(*s, sep))
			s++;
		if (*s)
			count++;
		while (*s && !is_sep(*s, sep))
			s++;
	}
	return (count);
}

char	*ft_strdup_range(const char *start, const char *end)
{
	char	*str;
	int		len;
	int		i;

	len = end - start;
	i = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = *start++;
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	const char	*start;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		start = s;
		while (*s && !is_sep(*s, c))
			s++;
		if (s > start)
			result[i++] = ft_strdup_range(start, s);
	}
	result[i] = NULL;
	return (result);
}
