/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agedikog <gedikoglu_27@icloud.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:48:32 by agedikog          #+#    #+#             */
/*   Updated: 2024/10/24 13:32:13 by agedikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* kelimeleri int c ye göre ayırır ve yeni strinler olarak
	ayırdığı her kelimeyi yeni bir stringin içimne atar */
static size_t	wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		if (*s == '\0')
		{
			break ;
		}
		s++;
	}
	return (count);
}

static char	*getword(const char *s, char c)
{
	size_t	i;
	char	*str;

	str = 0;
	i = 0;
	while (s[i] != c && s[i])
		i++;
	str = (char*)malloc(sizeof(char)*(i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str,s,i+1);
	return (str);
}

void	freearray(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	split = malloc(sizeof(char*)*(wordcount(s,c) + 1));
	if (!split)
		return (NULL);
	while (s[i] && j < wordcount(s,c))
	{
		while (s[i] == c && s[i])
			i++;
		split[j] = getword(s + i, c);
		if (!split[j])
			freearray(split);
		i += ft_strlen(split[j]);
		j++;
	}
	split[j] = NULL;
	return(split);
}