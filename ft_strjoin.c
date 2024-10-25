/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agedikog <gedikoglu_27@icloud.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:50:16 by agedikog          #+#    #+#             */
/*   Updated: 2024/10/24 15:49:00 by agedikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *dp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);

	dp = (char*)malloc(sizeof(char)*(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dp)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		dp[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dp[i]= s2[j];
		i++;
		j++;
	}
	dp[i]='\0';
	return (dp);
}