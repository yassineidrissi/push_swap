/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:53:34 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/17 23:15:36 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_pushlst(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!b || !(*b))
		return ;
	tmp = *b;
	*b = (*b)->link;
	tmp->link = *a;
	*a = tmp;
}

void	pa(struct node **a, struct node **b)
{
	ft_pushlst(a, b);
	ft_printf("pa\n");
}

void	pb(struct node **a, struct node **b)
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
