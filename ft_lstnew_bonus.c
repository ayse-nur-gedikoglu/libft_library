/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agedikog <gedikoglu_27@icloud.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:58:39 by agedikog          #+#    #+#             */
/*   Updated: 2024/11/01 05:29:00 by agedikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_l;

	new_l = NULL;
	new_l = (t_list *)malloc(sizeof(t_list));
	if (!new_l)
		return (NULL);
	new_l->content = content;
	new_l->next = NULL;
	return (new_l);
}
