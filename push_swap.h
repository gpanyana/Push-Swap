/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:25:27 by gpanyana          #+#    #+#             */
/*   Updated: 2019/09/04 17:24:35 by gpanyana         ###   ########.fr       */
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

typedef struct		s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

//static void	op_swap(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);

#endif
