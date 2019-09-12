/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:21:43 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/12 15:23:41 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrotate(t_list **src)
{
	if (!*src)
		return ;
	if(!(*src)->next)
		return ;
	t_list *cur = *src;
	*src = (*src)->next;
	ft_lstaddend(src, cur);
}
