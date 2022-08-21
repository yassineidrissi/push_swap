/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lst_man.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:52:40 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/21 13:05:49 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//! the methode behande this chose is
// (0 < 1 | 1 > 2 | 0 < 2) 1 3 2->rra sa
// (0 > 1 | 1 < 2 | 0 < 2) 2 1 3->sa
// (0 < 1 | 1 > 2 | 0 > 2) 2 3 1->rra
// (0 > 1 | 1 < 2 | 0 > 2) 3 1 2->ra 
// (0 > 1 | 1 > 2 | 0 > 2) 3 2 1->sa rra
void ft_sort_three(t_node **a)
{
	if ((*a)->data < (*a)->link->data && (*a)->link->data > (*a)->link->link->data && (*a)->data > (*a)->link->link->data)
	{
		rra(a);
		sa(a);
	}	
	else if ((*a)->data > (*a)->link->data && (*a)->link->data < (*a)->link->link->data && (*a)->data > (*a)->link->link->data)
		sa(a);
	else if ((*a)->data < (*a)->link->data && (*a)->link->data > (*a)->link->link->data && (*a)->data < (*a)->link->link->data)
		rra(a);
	else if ((*a)->data > (*a)->link->data && (*a)->link->data < (*a)->link->link->data && (*a)->data < (*a)->link->link->data)
		ra(a);
	else
	{
		sa(a);
		rra(a);
	}
}

void ft_sort_man(t_node **a, t_node **b)
{
	(void)b;
	int lenght;

	lenght = ft_lst_lenght(a); 
	if(lenght == 2)
		sa(a);
	else if(lenght == 3)
		ft_sort_three(a);
}
