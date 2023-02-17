/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:25:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:43:50 by yaidriss         ###   ########.fr       */
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

int	ft_lst_max(t_node **a)
{
	t_node	*lst;
	int		max;

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

int	ft_max_pos(t_node *s, int max)
{
	int	i;

	i = 0;
	while (s)
	{
		if (s->index == max)
			return (i);
		i++;
		s = s->link;
	}
	return (i);
}

void	ft_sort_radix_slave(t_node **a, t_node **b)
{
	int	max_pos;

	max_pos = ft_lstsize(*b) - 1;
	while (*b)
	{
		if ((*b)->index == max_pos)
		{
			pa(a, b);
			max_pos--;
		}
		else if (ft_max_pos(*b, max_pos) < ft_lstsize(*b) / 2)
		{
			rb(b);
		}
		else
			rrb(b);
	}
}

void	ft_sort_radix(t_node **a, t_node **b, int size)
{
	int	i;

	i = 0;
	if (size < 101)
		size = 15;
	else
		size = 35;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + size)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	ft_sort_radix_slave(a, b);
}
	// t_node *lst;
	// int size_a;
	// int size_b;
	// elements_count= max_pos;
	// while (max_pos > j)
	// {
	// 	i = -1;
	// 	size_a = ft_lstsize(*a);
	// 	while(++i < size_a)
	// 	{
	// 		lst = *a;
	// 		if (((lst->index >> j) & 1) == 0)
	// 			pb(a, b);
	// 		else
	// 			ra(a);
	// 	}
	// 	j++;
	// 	while (ft_lstsize(*b))
	// 		pa(a, b);
	// }
	// printf("%d\n", ft_max_pos(*b));
	// printf("%d\n", max_pos);
	// printf("%d\n",(*b)->index);
	// ft_printflst(b);
	// exit(0);
	// ft_printf("%d\n", max_pos);