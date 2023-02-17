/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_man.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:52:40 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:18:39 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//! the methode behande this chose is
// (0 < 1 | 1 > 2 | 0 < 2) 1 3 2->rra sa
// (0 > 1 | 1 < 2 | 0 < 2) 2 1 3->sa
// (0 < 1 | 1 > 2 | 0 > 2) 2 3 1->rra
// (0 > 1 | 1 < 2 | 0 > 2) 3 1 2->ra
// (0 > 1 | 1 > 2 | 0 > 2) 3 2 1->sa rra
//! work with a directly to test if the order is work.
int	ft_index_sort(t_node **a)
{
	int		min;
	int		i;
	t_node	**tmp;

	tmp = (t_node **)malloc(sizeof(t_node *));
	*tmp = *a;
	min = (*a)->data;
	i = -1;
	while ((*tmp)->link)
	{
		if ((*tmp)->data > (*tmp)->link->data && min > (*tmp)->link->data)
			min = (*tmp)->link->data;
		*tmp = (*tmp)->link;
	}
	i = 0;
	*tmp = *a;
	while (*tmp)
	{
		if ((*tmp)->data == min)
			return (i);
		*tmp = (*tmp)->link;
		i++;
	}
	return (0);
}

void	ft_sort_three(t_node **a)
{
	int	n;
	int	b;
	int	c;

	c = (*a)->link->link->data;
	b = (*a)->link->data;
	n = (*a)->data;
	if (ft_lst_sorted(a) == 1)
		return ;
	if (n < b && b > c && n > c)
		rra(a);
	else if (n > b && b < c && n > c)
		ra(a);
	else if (n < b && b > c && n < c)
	{
		rra(a);
		sa(a);
	}
	else if (n > b && b < c && n < c)
		sa(a);
	else
	{
		sa(a);
		rra(a);
	}
}

void	ft_sort_four_slave(t_node **a, t_node **b)
{
	rra(a);
	pb(a, b);
	ft_sort_three(a);
	pa(a, b);
}

void	ft_sort_four(t_node **a, t_node **b)
{
	if (ft_index_sort(a) == 0)
	{
		pb(a, b);
		ft_sort_three(a);
		pa(a, b);
	}
	else if (ft_index_sort(a) == 1)
	{
		sa(a);
		pb(a, b);
		ft_sort_three(a);
		pa(a, b);
	}
	else if (ft_index_sort(a) == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
		ft_sort_three(a);
		pa(a, b);
	}
	else
		ft_sort_four_slave(a, b);
}
