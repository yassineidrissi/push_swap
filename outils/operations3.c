/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:55:28 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:11:27 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_lstrangeup(t_node **a)
{
	t_node	*tmp;

	if (!a || !(*a))
		return ;
	tmp = *a;
	*a = (*a)->link;
	tmp->link = NULL;
	ft_lstadd_back(a, tmp);
}

void	ra(t_node **a)
{
	ft_lstrangeup(a);
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	ft_lstrangeup(b);
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
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

//! to store the previous node of the last node

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