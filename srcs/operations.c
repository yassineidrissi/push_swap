/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:19:41 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/15 22:47:37 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(struct node **a)
{
	int tmp;
	if(!a)
		return ;
	tmp = (*a)->data;
	(*a)->data = (*a)->link->data;
	(*a)->link->data = tmp;
	ft_printf("sa\n");
}

void sb(struct node **b)
{
	int tmp;
	if(!b)
		return ;
	tmp = (*b)->data;
	(*b)->data = (*b)->link->data;
	(*b)->link->data = tmp;
	ft_printf("sb\n");
}

void ss(struct node **a, struct node **b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

void pa(struct node **a, struct node **b)
{
	if (!b || !(*b))
		return ;
	t_node *tmp = *b;
	*b = (*b)->link;
	tmp->link = *a;
	*a = tmp;
	ft_lstdelone(tmp, del);
	ft_printf("pa\n");
}

void pb(struct node **a, struct node **b)
{
	if (!a || !(*a))
		return ;
	t_node *tmp = *b;
	*a = (*b)->link;
	tmp->link = *b;
	*b = tmp;
	ft_lstdelone(tmp, del);
	ft_printf("pb\n");
}

void ra(t_list **a)
{
	if (!a || !(*a))
		return ;
	ft_lstadd_back(a, *a);
	*a = (*a)->next;
	ft_printf("ra\n");
}

void rb(t_list **b)
{
	if (!b || !(*b))
		return ;
	ft_lstadd_back(b, *b);
	*b = (*b)->next;
	ft_printf("rb\n");
}

void rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}

void rra(t_list **a)
{
	if (!a || !(*a))
		return ;
	ft_lstadd_front(a, *a);
	ft_lstlast(*a)->next = *a;
	(*a)->next = ft_lstlast(*a);
	*a = (*a)->next;
	ft_printf("rra\n");
}

void rrb(t_list **b)
{
	if (!b || !(*b))
		return ;
	ft_lstadd_front(b, *b);
	ft_lstlast(*b)->next = *b;
	(*b)->next = ft_lstlast(*b);
	*b = (*b)->next;
	ft_printf("rrb\n");
}

void rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
}