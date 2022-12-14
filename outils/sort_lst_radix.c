/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:25:30 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/29 21:47:28 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_pos(int n)
{
	int	i;

	i = 0;
	while (n) 
	{
		n >>= 1;
		i++;
	}
	return (i);
}

int ft_lst_max(t_node **a)
{
	t_node	*lst;
	int max;
	
	lst = malloc(sizeof(t_node *));
	lst = *a;
	max = lst->data;
	while (lst)
	{
		if (lst->data > max)
			max = lst->data;
		lst = lst->link;
	}
	return (max);
}

//? the last thing to do is to check how this function work

void	ft_sort_radix(t_node **a, t_node **b)
{
	int	max_pos;
	int i;
	int j;
	t_node *lst;
	int size_a;
	// int size_b;
	// elements_count= max_pos;
	max_pos = ft_pos(ft_lstsize(*a));
	i = 0;
	j = 0;
	while (max_pos > j)
	{
		i = -1;
		size_a = ft_lstsize(*a);
		while(++i < size_a)
		{
			lst = *a;
			if (((lst->index >> j) & 1) == 0)
				pb(a, b);
			else
				ra(a);
		}
		j++;
		while (ft_lstsize(*b))
			pa(a, b);
	}
}