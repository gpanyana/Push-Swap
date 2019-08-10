/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 00:41:23 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/10 02:39:13 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_swap(t_node **stack)
{
	t_node		*head;
	t_node		*second;
	int			store;

	head = *stack;
	if (head == NULL)
		return ;
	second = head->next;
	if (second == NULL)
		return ;
	store = head->value;
	head->value = second->value;
	second->value = store;
}

void	sa(t_node **stack_a)
{
	op_swap(stack_a);
}

void	sb(t_node **stack_b)
{
	op_swap(stack_b);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
