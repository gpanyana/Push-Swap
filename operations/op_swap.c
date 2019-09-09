/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 00:41:23 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/06 14:05:27 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
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
}*/

int		op_swap_a(t_node *g, int move)
{
	int		temp;

	if (g->stack_a != NULL && g->stack_a->next != NULL)
	{
		temp = g->stack_a->value;
		g->stack_a->value = g->stack_a->next->value;
		g->stack_a->next->value = temp;
//		move == ONE ? add_move(g, "sa") : 0;
//		return (1);
	}
	return (0);
}

int		op_swap_b(t_node *g, int move)
{
	int		temp;

	if (g->stack_b != NULL && g->stack_b->next != NULL)
	{
		temp = g->stack_b->value;
		g->stack_b->value = g->stack_b->next->value;
		g->stack_b->next->value = temp;
//?		move = ONE ? add_move(g, "sb") : 0;
//?		return (1);
	}
	return (0);
}

/*
void	op_swap_both()
{
}
