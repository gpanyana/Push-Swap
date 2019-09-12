/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrevrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:23:53 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/12 15:24:29 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rev_rotate(t_list **src)
{
	if (!*src)
		return ;
	if (!(*src)->next)
		return ;
	t_list *detached = *src;
	*src = (*src)->next;
	t_list *cur = *src;
	detached->next = NULL;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	ft_lstadd(src, detached);
	detached = cur->next;
	cur->next = NULL;
	ft_lstadd(src, detached);
}
