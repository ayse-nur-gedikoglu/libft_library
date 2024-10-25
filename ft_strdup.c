/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agedikog <gedikoglu_27@icloud.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:32:39 by agedikog          #+#    #+#             */
/*   Updated: 2024/10/24 16:04:17 by agedikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char    *str;
	int str_len;

	str_len = ft_strlen(s)+1;
	if ((str = malloc(str_len)))
	{
		ft_strlcpy(str, s, str_len);
		return (str);
	}
	return (NULL);
}
