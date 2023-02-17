/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:40:13 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:47:11 by yaidriss         ###   ########.fr       */
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
	free(*lst);
}

static void	ft_sort_lst(t_node **a, t_node **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size <= 5)
		ft_sort_man(a, b);
	else
	{
		ft_init_index(a);
		ft_sort_index(a);
		ft_sort_radix(a, b, size);
	}
}

void ft_free_stack(t_node **stack)
{
	t_node *tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->link;
		free(tmp);
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
	exit(0);
	stack_a = (t_node **)malloc(sizeof(t_node *));
	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_add_stacknode(stack_a, tmp);
	if (ft_lst_sorted(stack_a) == 1)
		return (0);
	ft_sort_lst(stack_a, stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	// ft_free_lst((void**) stack_b);
	// ft_free_lst((void**) stack_a);
}
