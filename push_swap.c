/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:40:13 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/08 20:10:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printflst(t_node **a)
{
		t_node **lst;
    lst = malloc(sizeof(t_node **));
    *lst = *a;
    while (*lst)
    {
        ft_printf("%d \n", (*lst)->data);
        *lst = (*lst)->link;
    }
    // ft_free_lst(lst);
}

static void ft_sort_lst(t_node **a, t_node **b)
{
    if (ft_lstsize(*a) <= 5)      
       ft_sort_man(a, b);
    else
    {
        ft_init_index(a);
        // ft_printf("ft_int_is_working %d\n",(*a)->index);
        ft_sort_index(a);
		// ft_printf("ft_sort is working %d\n",(*a)->index);
        ft_sort_radix(a, b);     
    }
}

int main(int ac, char ** av)
{
    t_node **stack_a;
    t_node **stack_b;
		char **tmp;

    if(ac < 2)
        return 1;
    tmp = ft_arg_is_valid(ac, av);
    ft_printf("your corent stack is: \n");
    stack_a = (t_node **)malloc(sizeof(t_node*));
    stack_b = (t_node **)malloc(sizeof(t_node*));
    // ft_printflst(stack_a);
    *stack_a = NULL;
    *stack_b = NULL;
    ft_add_stacknode(stack_a, tmp);
    //! we will see what to do in free for case of list is sorted
		ft_printf("the list now is\n");
		ft_printflst(stack_a);
    if(ft_lst_sorted(stack_a) == 1)
    {
        // ft_printf("list is sorted\n");
        // ft_free_lst((void *)stack_a);
        // ft_free_lst((void *)stack_b);
        return 0;
    }
    ft_sort_lst(stack_a, stack_b);
    ft_printf("your list now is\n");
    ft_printflst(stack_a);
    ft_printflst(stack_b);
}

