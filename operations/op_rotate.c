/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:02:33 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/05 16:37:47 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		op_rotate_a(t_node *g, int move)
{
	t_stack	*temp;

	if (g->stack_a != NULL && g->stack_a->next != NULL)
	{
		temp = g->stack_a;
		g->stack_a = g->stack_a->next;
		temp->next = NULL;
		g->stack_end_a->next = temp;
		g->stack_end_a = temp;
//?		move == ONE ? add_move(g, "ra") : 0;
//?		return (1);
	}
	return (0);
}

int		op_rotate_b(t_node *g, int move)
{
	t_stack *temp;

	if (g->stack_b != NULL && g->stack_b->next != NULL)
	{
		temp = g->stack_b;
		g->stack_b = g->stack_b->next;
		temp->next = NULL;
		g->stack_end_b->next = temp;
		g->stack_end_b = temp;
//?		move == ONE ? add_move(g, "rb") : 0;
//?		return (1);
	}
	return (0);
}

void	op_rotate_ab(t_node *g)
{
}
