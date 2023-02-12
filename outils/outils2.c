/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:17:47 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/13 00:29:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_lenght(t_node **a)
{
	int	i;

	i = 1;
	while (*a)
	{
		i++;
		(*a) = (*a)->link;
	}
	return (i);
}

void	ft_init_index(t_node **a)
{
	t_node	**tmp;

	tmp = malloc(sizeof(t_node *));
	*tmp = *a;
	while (*tmp)
	{
		(*tmp)->index = -1;
		(*tmp) = (*tmp)->link;
	}
	free(tmp);
}

int	ft_min_index(t_node **a)
{
	t_node	**tmp;
	int		min;

	min = MAXINT;
	tmp = malloc(sizeof(t_node *));
	*tmp = *a;
	while (*tmp)
	{
		if ((*tmp)->index == -1 && min > (*tmp)->data)
			min = (*tmp)->data;
		(*tmp) = (*tmp)->link;
	}
	free(tmp);
	return (min);
}

void	ft_sort_index(t_node **a)
{
	int		min;
	int		i;
	int		j;
	t_node	**tmp;

	tmp = malloc(sizeof(t_node *));
	i = 0;
	j = 0;
	while (j++ < ft_lstsize(*a))
	{
		*tmp = *a;
		while (*tmp)
		{
			min = ft_min_index(a);
			if ((*tmp)->data == min)
				(*tmp)->index = i++;
			(*tmp) = (*tmp)->link;
		}
	}
	free(tmp);
}
