/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:34:42 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/14 11:36:36 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdlib.h>

typedef struct	Node
{
	int				stack_a;
	int				stack_b;
	struct Node*	next;
}					t_node;

t_node		*template_list(int n)
{
	int			i;
	struct Node* head = NULL;
	struct Node* body = NULL;
	struct Node* tail = NULL;

	i = 0;
	while (i < n)
	{
		body = (struct Node*)malloc(sizeof(struct Node));
		body->stack_a = i;
		body->stack_b = 'x';
		body->next = NULL;
		if (head == NULL)
			head = body;
		else
		{
			tail = head;
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = body;
		}
		i++;
	}
	return (head);
}

void	printlist(struct Node* head)
{
	struct Node* g;

	g = head;
	while (g != NULL)
	{
		ft_putnbr(g->stack_a);
		ft_putstr("\t");
		(g->stack_b == 'x') ? ft_putstr(" ") : ft_putnbr(g->stack_b);
		ft_putchar('\n');
		g = g->next;
	}
	ft_putstr("_\t_\n");
	ft_putstr("a\tb\n");
}

int		main(void)
{
	size_t		i;
	struct Node	*head;

	i = 5;
	head = NULL;
	head = template_list(i);
	printlist(head);
	return (0);
}
