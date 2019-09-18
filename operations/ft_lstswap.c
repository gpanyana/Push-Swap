/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:11:46 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/12 15:27:55 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **src)
{
	if (!*src)
		return ;
	if (!(*src)->next)
		return ;
	t_list *temp = (*src)->content;
	(*src)->content = (*src)->next->content;
	(*src)->next->content = temp;
}
