/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:16:09 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/12 15:26:22 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **dst, t_list **src)
{
	if (!src)
		return ;
	t_list *detached = *src;
	*src = (*src)->next;
	detached->next = NULL;
	ft_lstadd(dst, detached);
}

void	ft_lstpushend(t_list **dst, t_list **src)
{
	if (!*src)
	   return ;
	if (!(*src)->next)
	{
		return ;
	}
	t_list *cur = *src;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	t_list *link = cur->next;
	cur->next = NULL;
	ft_lstadd(dst, link);
}
