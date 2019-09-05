/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:25:27 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/05 18:41:20 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define TRUE (1)
# define FALSE (0)
# define ERROR (-1)
# define DONE (2)
# define INTNEGLIM (-2147483648)
# define INTPOSLIM (2147483647)

enum { ONE, BOTH };
//enum { INC, DEC };

typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_move
{
	char			*name;
	struct s_move	*next;
}					t_move;

typedef struct		s_node		//as i use and declare new types, must add to this struct.
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*stack_end_a;
	t_stack	*stack_end_b;
	t_move	*move;
	t_move	*move_end;
}					t_node;


/*
 *	op_swap.c
 */

int		op_swap_a(t_node *g, int move);
int		op_swap_b(t_node *g, int move);
int		op_swap_ab(t_node *g);

/*
 *	op_push.c
 */

int		op_push_a(t_node *g, int move);
int		op_push_b(t_node *g, int move);
int		op_push_ab(t_node *g);

/*
 *	op_rotate.c
 */

int		op_rotate_a(t_node *g, int move);
int		op_rotate_b(t_node *g, int move);
int		op_rotate_ab(t_node *g);

/*
 *	op_rev_rotate.c
 */
int		op_rev_rotate_a(t_node *g, int move);
int		op_rev_rotate_b(t_node *g, int move);
int		op_rev_rotate_ab(t_node *g);

#endif
