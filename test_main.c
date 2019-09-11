#include "libft/libft.h"
#include "push_swap.h"
#include "stdio.h"

void	swap(t_list **src)
{
	if (!*src)
		return ;
	if (!(*src)->next)
		return ;
	t_list *temp = (*src)->content;
	(*src)->content = (*src)->next->content;
	(*src)->next->content = temp;
}

void	push_end(t_list **dst, t_list **src)
{
	if (!*src)
	   return ;
	if (!(*src)->next)
	{
		return ;
	}
	t_list *cur = *src;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	printf("%i\n", *(int*)cur->next->content);	// prints out the 2nd last node
	t_list *link = cur->next;
	cur->next = NULL;
	ft_lstadd(dst, link);
}

void	push(t_list **dst, t_list **src)
{
	if (!*src)
		return ;
	t_list *detached = *src;
	*src = (*src)->next;
	detached->next = NULL;
	ft_lstadd(dst, detached);
}
/*
void	rotate(t_list **alst)
	if (!*dst)
		return ;
	if(!(*dst)->next)
		return ;
	t_list *head = *dst;
	*dst = (*dst)->next;
	t_list *cur = *dst;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	head = cur->next;
	head->next = NULL;
}*/

void	rev_rotate(t_list **src)
{
	if (!*src)
		return ;
	if (!(*src)->next)
		return ;
	t_list *detached = *src;
	*src = (*src)->next;
	t_list *cur = *src;
	detached->next = NULL;
//	t_list *cur = *src;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	ft_lstadd(src, detached);
	detached = cur->next;
	cur->next = NULL;
//	ft_lstadd(src, detached);	
}

int		main(int ac, char **av)
{
	t_list *a;
	t_list *b;

	a = NULL;
	b = NULL;

	int i = 1;
	while (i < ac)
	{
		int num = ft_atoi(av[i]);
		ft_lstadd(&a, ft_lstnew(&num, sizeof(int)));
		i++;
	}
	t_list *cur;
	rev_rotate(&a);
	cur = a;
	while (cur)
	{
		printf("A: %i\n", *(int*)cur->content);
		cur = cur->next;
	}
	cur = b;
	while (cur)
	{
		printf("B: %i\n", *(int*)cur->content);
		cur = cur->next;
	}
}
