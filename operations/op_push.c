/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:39:29 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/05 15:39:09 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static void		op_push(t_node **from_stack, t_node **to_stack)
{
	t_node		*head;
	t_node		*second;
	char		temp;
	int		store;

	if (stack_b == NULL)	//pa; if b is empty do nothing
		return ;	//push top of b to the top of a
	

	if (stack_a == NULL)	//pb; if a is empty do nothing
		return ;	//push top of a to the top of b
}

//pa = takes top element from stack b and pushes it to top of stack a.
//if stack b is empty do nothing
void	pa(t_node **stack_b, t_node **stack_a)
{
	op_push(stack_b, stack_a);
}

//pb =takes top element from stack a and pushes it to top of stack b
//** if stack a is empty do nothing 
void	pb(t_node **stack_a, t_node **stack_b)
{
	op_push(stack_a, stack_b);
}*/

void	op_push_a(t_node *g)
{
	t_stack	*temp;

	if (g->stack_b != NULL)
	{
		temp = g->stack_b;
		g->stack_b = g->stack_b->next;
		temp->next = g->stack_a;
		g->stack_a = temp;
//?		g->stack_a->next == NULL ? g->stack_end_a = g->stack_a : 0;
//?		g->stack_b == NULL ? g->stack_end_b = : 0;
		add_move(g, "pa");
	}
}

void	op_push_b(t_node *g)
{
	t_stack	*temp;

	if (g->stack_a != NULL)
	{
		temp = g->stack_a;
		g->stack_a = g->stack_a->next;
		temp->next = g->stack_b;
		g->stack_b = temp;
//		g->stack_b->next == NULL ? g->stack_end_b = g->stack_b : 0;
		if (g->stack_b->next == NULL)
		{
			g->stack_end_b = g->stack_b;
			return (0);
		}
//		g->stack_a == NULL ? g->stack_end_a = NULL : 0;
		if (g->stack_a == NULL)
		{
			g->stack_end_a = NULL;
			return (0);
		}
		add_move(g, "pb");
	}
}
