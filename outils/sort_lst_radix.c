/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:25:30 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/10 20:59:20 by yaidriss         ###   ########.fr       */
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

int	ft_max_pos(t_node *s)
{
	int	i;
	i = 0;
	while (s)
	{
		if (s->index == ft_lstsize(s) - 1)
			break;
		i++;
		s= s->link;
	}
	return (i);
}

void	ft_sort_radix(t_node **a, t_node **b)
{
	int	max_pos;
	int i;
	int j;
	// t_node *lst;
	// int size_a;
	// int size_b;
	// elements_count= max_pos;
	i = 0;
	j = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 15)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
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
	max_pos = ft_lstsize(*b) - 1;
	// printf("%d\n", max_pos);
	// printf("%d\n",(*b)->index);
	// ft_printflst(b);
	// exit(0);
	// ft_printf("%d\n", max_pos);
	while (*b)
	{
		if ((*b)->index == max_pos)
		{
			pa(a, b);
			max_pos--;
		}
		else
			rb(b);
	//	else if (ft_max_pos(*b) < ft_lstsize(*b) / 2)
	// 	{
	// 		rb(b);
	// 	}
	// 	else
	// 		rrb(b);
	// }
	}
}