/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:25:30 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/25 14:41:38 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_pos(int n)
{
	int	i;

	i = 1;
	while (n >> 1)
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
	t_node **lst;
	// elements_count= max_pos;

	i = 0;
	j = 1;
	lst = malloc(sizeof(t_node *));
	max_pos = ft_pos(ft_lst_max(a));
	printf("max pos is %d",max_pos);
	while (max_pos >= j)
	{
		i = -1;
		*lst = *b;
		while(++i < ft_lstsize(*a))
		{
			if(((*a)->index & j) == 1)
				pb(a, b);
			else
				ra(a);
			
		}
		j++;
		while (*lst)
		{
			if(((*lst)->index & j) == 1)
				pa(a, b);
			else
				rb(a);
			*lst = (*lst)->link;
		}
	}
}