/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_man2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:18:02 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:39:04 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_five_slave(t_node **a, t_node **b)
{
	if (ft_index_sort(a) == 3)
	{
		rra(a);
		rra(a);
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
	}
	else
	{
		rra(a);
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
	}
}

void	ft_sort_five(t_node **a, t_node **b)
{
	if (ft_index_sort(a) == 0)
	{
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
	}
	else if (ft_index_sort(a) == 1)
	{
		sa(a);
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
	}
	else if (ft_index_sort(a) == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
	}
	else
		ft_sort_five_slave(a, b);
}

void	ft_sort_man(t_node **a, t_node **b)
{
	if (ft_lstsize(*a) == 2)
		sa(a);
	else if (ft_lstsize(*a) == 3)
		ft_sort_three(a);
	else if (ft_lstsize(*a) == 4)
		ft_sort_four(a, b);
	else if (ft_lstsize(*a) == 5)
		ft_sort_five(a, b);
	else
		exit(1);
}
