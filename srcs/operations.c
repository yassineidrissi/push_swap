/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:19:41 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/16 12:09:25 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(struct node **a)
{
	int tmp;
	if(!a || !*a || !(*a)->link)
		return ;
	tmp = (*a)->data;
	(*a)->data = ((*a)->link)->data;
	((*a)->link)->data = tmp;
}

void sa(struct node **a)
{
	swap(a);
	printf("sa\n");
}

void sb(struct node **b)
{
	swap(b);
	printf("sb\n");
}

void ss(struct node **a, struct node **b)
{
	swap(a);
	swap(b);
	printf("ss\n");
}

void ft_printflst(t_node **a)
{
	while(*a)
	{
		printf("%d ", (*a)->data);
		*a = (*a)->link;
	}
	printf("\n");
}

void ft_pushlst(t_node **a, t_node **b)
{
	if (!b || !(*b))
		return ;
	t_node *tmp;
	tmp = malloc(sizeof(t_node));
	tmp = *b;
	*b = (*b)->link;
	tmp->link = *a;
	*a = tmp;
	// ft_lstdelone(tmp, del);
}

void pa(struct node **a, struct node **b)
{
	ft_pushlst(a, b);
	printf("pa\n");
}

void pb(struct node **a, struct node **b)
{
	ft_pushlst(b, a);
	printf("pb\n");
}

// void pa(struct node **a, struct node **b)
// {
// 	if (!b || !(*b))
// 		return ;
// 	t_node *tmp = *b;
// 	*b = (*b)->link;
// 	tmp->link = *a;
// 	*a = tmp;
// 	ft_lstdelone(tmp, del);
// 	printf("pa\n");
// }

// void pb(struct node **a, struct node **b)
// {
// 	if (!a || !(*a))
// 		return ;
// 	t_node *tmp = *b;
// 	*a = (*b)->link;
// 	tmp->link = *b;
// 	*b = tmp;
// 	ft_lstdelone(tmp, del);
// 	printf("pb\n");
// }

void ra(t_node **a)
{
	if (!a || !(*a))
		return ;
	ft_lstadd_back(a, *a);
	*a = (*a)->link;
	printf("ra\n");
}

void rb(t_node **b)
{
	if (!b || !(*b))
		return ;
	ft_lstadd_back(b, *b);
	*b = (*b)->link;
	printf("rb\n");
}

// void rr(t_list **a, t_list **b)
// {
// 	ra(a);
// 	rb(b);
// 	printf("rr\n");
// }

// void rra(t_list **a)
// {
// 	if (!a || !(*a))
// 		return ;
// 	ft_lstadd_front(a, *a);
// 	ft_lstlast(*a)->next = *a;
// 	(*a)->next = ft_lstlast(*a);
// 	*a = (*a)->next;
// 	printf("rra\n");
// }

// void rrb(t_list **b)
// {
// 	if (!b || !(*b))
// 		return ;
// 	ft_lstadd_front(b, *b);
// 	ft_lstlast(*b)->next = *b;
// 	(*b)->next = ft_lstlast(*b);
// 	*b = (*b)->next;
// 	printf("rrb\n");
// }

// void rrr(t_list **a, t_list **b)
// {
// 	rra(a);
// 	rrb(b);
// 	printf("rrr\n");
// }