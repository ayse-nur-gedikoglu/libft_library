/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agedikog <gedikoglu_27@icloud.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:16:35 by agedikog          #+#    #+#             */
/*   Updated: 2024/10/24 15:41:21 by agedikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;
	unsigned char tmpc;
	tmp = (unsigned char*)b;
	size_t i;

	i = 0;
	tmpc = c;
	if	( b == NULL || len == 0)
		return (b);
	while (i < len)
	{
		tmp[i] = tmpc;
		i++;
	}
	return (b);
}
