/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:19:41 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/10 22:40:15 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void swap(struct node **a)
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
	ft_printf("sa\n");
}

void sb(struct node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void ss(struct node **a, struct node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

// void ft_printflst(t_node **a)
// {
// 	while(*a)
// 	{
// 		printf("%d\n", (*a)->data);
// 		(*a) = (*a)->link;
// 	}
// 	printf("\n");
// }

static void ft_pushlst(t_node **a, t_node **b)
{
	if (!b || !(*b))
		return ;
	t_node *tmp;
	// tmp = malloc(sizeof(t_node));
	tmp = *b;
	*b = (*b)->link;
	tmp->link = *a;
	*a = tmp;
	// free(tmp);
	// ft_lstdelone(tmp, del);
}

void pa(struct node **a, struct node **b)
{
	ft_pushlst(a, b);
	ft_printf("pa\n");
}

void pb(struct node **a, struct node **b)
{
	ft_pushlst(b, a);
	ft_printf("pb\n");
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

//! WE NEED TO LINK THE LAST NODE TO NULL IN ft_lstrangup

static void ft_lstrangeup(t_node **a)
{
	if (!a || !(*a))
		return ;
	t_node *tmp = *a;
	*a = (*a)->link;
	tmp->link = NULL;
	ft_lstadd_back(a, tmp);
}

void ra(t_node **a)
{
	ft_lstrangeup(a);
	ft_printf("ra\n");
}

void rb(t_node **b)
{
	ft_lstrangeup(b);
	ft_printf("rb\n");
}

void rr(t_node **a, t_node **b)
{
	ft_lstrangeup(a);
	ft_lstrangeup(b);
	ft_printf("rr\n");
}

//******other methode for ra and rb*****************************//
// void ra(struct node **a)
// {
//     if (*a == NULL)
//         return ;
// 	int tmp = (*a)->data;
// 	struct node *ext = (struct node*)malloc(sizeof(struct node));
// 	ext->data = tmp;
// 	ext->link = NULL;
// 	ext->previous =NULL;
// 	struct node *ptr = *a;
// 	(*a) = (*a)->link;
// 	//pop_first(a);
// 	while(ptr->link != NULL)
// 		ptr = ptr->link;
// 	ptr->link = ext;
// 	printf("ra\n");
	
// }
// void ra(t_node **a)
// {
//     if (*a == NULL)
//         return ;
//     int tmp = (*a)->data;
//     struct node *ext = (struct node*)malloc(sizeof(struct node));
//     ext->data = tmp;
//     ext->link = NULL;
//     // ext->previous =NULL;
//     struct node *ptr = *a;
//     (*a) = (*a)->link;
//     //pop_first(a);
//     while(ptr->link != NULL)
//         ptr = ptr->link;
//     ptr->link = ext;
// 	free(ext);
//     printf("ra\n");
// }

static void ft_lstrangedown(t_node **a)
{
	if (!a || !(*a))
		return ;
	t_node *tmp = ft_lstlast(*a);
	t_node *tmp1; //! to store the previous node of the last node
	tmp1 = *a;
	while(tmp1->link != tmp)
		tmp1 = tmp1->link;
	tmp1->link = NULL;
	ft_lstadd_front(a, tmp);
	//  ft_lstlast(*a)->link = 0;
}

void rra(t_node **a)
{
	ft_lstrangedown(a);
	ft_printf("rra\n");
}

void rrb(t_node	**b)
{
	ft_lstrangedown(b);
	ft_printf("rrb\n");
}

void rrr(t_node **a, t_node **b)
{
	ft_lstrangedown(a);
	ft_lstrangedown(b);
	ft_printf("rrr\n");
}

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