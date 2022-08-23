/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:37:03 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/23 19:56:39 by yaidriss         ###   ########.fr       */
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

void	ft_add_stacknode(struct node **stack_a, int ac, char **av)
{
	char	**tmp;
	int		i;

	i = 0;
	if (ac == 2)
		tmp = ft_split(av[1], ' ');
	else
		tmp = av + 1;
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
	printf("the length of the lst is %d\n", i);
	return (i);
}