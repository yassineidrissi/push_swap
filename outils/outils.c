/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:37:03 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/20 20:04:18 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *ft_atoi_lst(char **str)
{
	int *lst;
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
		i++;
	lst = (int *)malloc(sizeof(int) * i);
	while (*str)
	{
		lst[j++] = ft_atoi(*str);
		str++;
	}
	return (lst);
}

void ft_add_node(t_node **lst, int data)
{
	t_node *tmp;
	tmp = (t_node *)malloc(sizeof(t_node));
	tmp->data = data;
	tmp->link = NULL;
	ft_lstadd_back(lst,tmp);
}

void ft_free_lst(char **lst)
{
	int i;

	i = 0;
	while(lst[i])
		free(lst[i++]);
	free(lst);
}

void ft_add_stacknode(struct node **stack_a, int ac, char **av)
{
	char **tmp;
	t_node *new;
	int i;
	
	i = 0;
	if (ac == 2)
		tmp = ft_split(av[1], ' ');
	else
		tmp = av + 1;
	while (tmp[i])
	{
		new = ft_lstnew(ft_atoi(tmp[i++]));
		ft_lstadd_back(stack_a, new);
	}
	if (ac == 2)
		ft_free_lst(tmp);
	//ft_index_sort(stack_a);
}