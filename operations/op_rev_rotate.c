/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:38:32 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/05 16:58:30 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		op_rev_rotate_a(t_node *g, int move)
{
	t_stack	*temp;
	t_stack	*temp_end;

	if (g->stack_a != NULL && g->stack_a->next != NULL)
	{
		temp = g->stack_a;
		temp_end = g->stack_end_a;
		while (temp->next != g->stack_end_a)
			temp = temp->next;
		g->stack_end_a = temp;
		g->stack_end_a->next = NULL;
		temp_end->next = g->stack_a;
		g->stack_a = temp_end;
//?		move == ONE ? add_move(g, "rra") : 0;
//?		return (1);
	}
	return (0);
}

int		op_rev_rotate_b(t_node *g, int move)
{
	t_stack	*temp;
	t_stack	*temp_end;

	if (g->stack_b != NULL && g->stack_b->next != NULL)
	{
		temp = g->stack_b;
		temp_end = g->stack_end_b;
		while (temp->next != g->stack_end_b)
			temp = temp->next;
		g->stack_end_b = temp;
		g->stack_end_b->next = NULL;
		temp_end->next = g->stack_b;
		g->stack_a = temp_end;
//?		move == ONE ? add_move(g, "rrb") : 0;
//?		return (1);
	}
	return (0);
}

int		op_rev_rotate_ab()
{
}
