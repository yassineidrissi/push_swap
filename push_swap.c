/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:40:13 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/11 21:48:01 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printflst(t_node **a)
{
	t_node	**lst;

	lst = malloc(sizeof(t_node **));
	*lst = *a;
	while (*lst)
	{
		*lst = (*lst)->link;
	}
}

static void	ft_sort_lst(t_node **a, t_node **b)
{
	if (ft_lstsize(*a) <= 5)
		ft_sort_man(a, b);
	else
	{
		ft_init_index(a);
		ft_sort_index(a);
		ft_sort_radix(a, b);
	}
}

int	main(int ac, char **av)
{
	t_node	**stack_a;
	t_node	**stack_b;
	char	**tmp;

	if (ac < 2)
		return (1);
	tmp = ft_arg_is_valid(ac, av);
	stack_a = (t_node **)malloc(sizeof(t_node *));
	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_add_stacknode(stack_a, tmp);
	if (ft_lst_sorted(stack_a) == 1)
		return (0);
	ft_sort_lst(stack_a, stack_b);
}
