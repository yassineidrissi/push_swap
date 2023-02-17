/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:19:41 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/17 23:15:14 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(struct node **a)
{
	int	tmp;

	if (!a || !*a || !(*a)->link)
		return ;
	tmp = (*a)->data;
	(*a)->data = ((*a)->link)->data;
	((*a)->link)->data = tmp;
}

void	sa(struct node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(struct node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(struct node **a, struct node **b)
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
