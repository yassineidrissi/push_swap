/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:02:23 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/21 18:09:47 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_printflst(t_node **a)
{
	while(*a)
	{
		printf("%d\n", (*a)->data);
		(*a) = (*a)->link;
	}
	printf("\n");
}

static void ft_sort_lst(t_node **a, t_node **b)
{
    if (ft_lstsize(*a) <= 5)
        ft_sort_man(a, b);
    // ft_sort_auto(a);
}

int main(int ac, char ** av)
{
    t_node **stack_a;
    t_node **stack_b;

    if(ac < 2)
        return 1;
    printf("your corent stack is:\n");
    ft_arg_is_valid(ac, av);
    stack_a = (t_node **)malloc(sizeof(t_node*));
    stack_b = (t_node **)malloc(sizeof(t_node*));
    printf("your corent stack is: 1\n");
    *stack_a = NULL;
    *stack_b = NULL;
    ft_add_stacknode(stack_a, ac, av);
    ft_printflst(stack_a);
    //! we will see what to do in free for case of list is sorted
    if(ft_lst_sorted(stack_a) == 1)
    {
        printf("list is sorted\n");
        // ft_free_lst((void *)stack_a);
        // ft_free_lst((void *)stack_b);
        return 0;
    }
    ft_sort_lst(stack_a, stack_b);
    printf("your list now is\n");
    ft_printflst(stack_a);
}

