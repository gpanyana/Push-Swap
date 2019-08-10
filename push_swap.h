/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:25:27 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/10 02:57:22 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define TRUE (1)
# define FALSE (0)
# define ERROR (-1)
# define DONE (2)
# define INTNEGLIM (-2147483648)
# define INTPOSLIM (2147483647)
#include "libft/libft.h"

typedef struct		s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);

#endif
