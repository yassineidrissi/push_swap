/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:37:03 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/06 22:24:34 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_atoi_lst(char **str)
{
	int	*lst;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	lst = (int *)malloc(sizeof(int) * i);
	while (*str)
	{
		lst[j++] = ft_atoi(*str);
		str++;
	}
	return (lst);
}

void	ft_add_node(t_node **lst, int data)
{
	t_node	*tmp;

	tmp = (t_node *)malloc(sizeof(t_node));
	tmp->data = data;
	tmp->link = NULL;
	ft_lstadd_back(lst, tmp);
}

void	ft_free_lst(void **lst)
{
	while (*lst)
		free(*lst++);
	free(lst);
}

void	ft_add_stacknode(struct node **stack_a, char **tmp)
{
	int		i;

	i = 0;
	while (tmp[i])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(tmp[i++])));
	// if (ac == 2)
		// ft_free_lst((void *)tmp);
	//ft_index_sort(stack_a);
}

int	ft_lst_sorted(t_node **a)
{
	t_node **tmp;

	tmp = (t_node **)malloc(sizeof(struct node *));
	*tmp = *a;
	while ((*tmp)->link)
	{
		if ((*tmp)->data > (*tmp)->link->data)
		{
			// free(*tmp);
			return (0);
		}
		tmp = &(*tmp)->link;
	}
	// free(tmp);
	return (1);
}

int	ft_lst_lenght(t_node **a)
{
	int	i;

	i = 1;
	while (*a)
	{
		i++;
		(*a) = (*a)->link;
	}
	// printf("the length of the lst is %d\n", i);
	return (i);
}

void ft_init_index(t_node **a)
{
	t_node **tmp;
	tmp = malloc(sizeof(t_node *));
	*tmp = *a;
	while(*tmp)
	{
		(*tmp)->index = -1;
		(*tmp) = (*tmp)->link;
	}
	free(tmp);
}

int ft_min_index(t_node **a)
{
	t_node **tmp;
	int min;

	min = MAXINT;
	tmp = malloc(sizeof(t_node *));
	*tmp = *a;
	while(*tmp)
	{
		if ((*tmp)->index == -1 && min > (*tmp)->data)
			min = (*tmp)->data;
		(*tmp) = (*tmp)->link;
	}
	free(tmp);
	return (min);
}

void ft_sort_index(t_node **a)
{
	int min;
	int i;
	int j;
	t_node **tmp;

	tmp = malloc(sizeof(t_node *));
	i = 0;
	j = 0;
	while(j++ < ft_lstsize(*a))
	{
		*tmp = *a;
		while (*tmp)
		{
			min = ft_min_index(a);
			if ((*tmp)->data == min)
			{
				(*tmp)->index = i++;
				// printf("the index %d , and min is %d\n",(*tmp)->index , min);
			}
			(*tmp) = (*tmp)->link;
		}
	}
	free(tmp);
}