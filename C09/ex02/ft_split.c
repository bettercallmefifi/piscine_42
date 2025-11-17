/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:53:33 by feel-idr          #+#    #+#             */
/*   Updated: 2025/09/02 22:11:06 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_is_delim(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	ft_count_words(const char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*str)
	{
		if (ft_is_delim(*str, charset) == 0 && i == 0)
		{
			i = 1;
			count++;
		}
		else if (ft_is_delim(*str, charset) == 1)
			i = 0;
		str++;
	}
	return (count);
}

char	*ft_s_dup(char *str, int start, int end)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		s[i++] = str[start++];
	s[i] = '\0';
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		index;
	char	**split;

	split = malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	if (!split || !str)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (ft_is_delim(str[i], charset) == 0 && index < 0)
			index = i;
		else if ((ft_is_delim(str[i], charset) == 1
				|| i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = ft_s_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
/*
int main()
{
    char str[] = "if young metro don't trust i'm gon' shoot you";
    char *charset = "";
    char **split_str = ft_split(str, charset);
    int i = 0;

    while (split_str[i])
    {
        printf("%s\n", split_str[i]);
        i++;
    }

    return 0;
}*/
