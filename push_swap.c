/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:02:23 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/20 22:56:28 by yaidriss         ###   ########.fr       */
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

int main(int ac, char ** av)
{
    t_node **stack_a;
    t_node **stack_b;

    if(ac < 2)
        return 1;
    ft_arg_is_valid(ac, av);
    stack_a = (t_node **)malloc(sizeof(t_node*));
    stack_b = (t_node **)malloc(sizeof(t_node*));
    *stack_a = NULL;
    *stack_b = NULL;
    ft_add_stacknode(stack_a, ac, av);
    printf("your corent stack is:\n");
    ft_printflst(stack_a);
    
}

