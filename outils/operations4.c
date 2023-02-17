/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:08:47 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:11:41 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_lstrangedown(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp1;

	if (!a || !(*a))
		return ;
	tmp = ft_lstlast(*a);
	tmp1 = *a;
	while (tmp1->link != tmp)
		tmp1 = tmp1->link;
	tmp1->link = NULL;
	ft_lstadd_front(a, tmp);
}

void	rra(t_node **a)
{
	ft_lstrangedown(a);
	ft_printf("rra\n");
}

void	rrb(t_node **b)
{
	ft_lstrangedown(b);
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	ft_lstrangedown(a);
	ft_lstrangedown(b);
	ft_printf("rrr\n");
}
