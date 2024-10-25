/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agedikog <gedikoglu_27@icloud.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:49:50 by agedikog          #+#    #+#             */
/*   Updated: 2024/10/24 15:56:03 by agedikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (!s || !f)
		return;
	while (s[i])
	{
		(*f)(i, s + i); // Hem index 'i' hem de 's + i' yani adresi fonksiyona gönderiyoruz.
		i++;

	}
}
