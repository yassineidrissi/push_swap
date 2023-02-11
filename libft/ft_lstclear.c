/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:53:28 by yidrissi          #+#    #+#             */
/*   Updated: 2022/08/20 21:23:30 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_node **lst, void (*del)(void *))
{
	t_node	*temp;

	if (!lst)
		return ;
	temp = *lst;
	while (temp)
	{
		temp = (*lst)->link;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	lst = 0;
}

// {
// 	t_list	*temp;

// 	if (!lst)
// 		return ;
// 	temp = *lst;
// 	while (temp)
// 	{
// 		temp = *lst;
// 		ft_lstdelone(*lst, del);
// 		*lst = temp->next;
// 	}
// 	*lst = 0;
// }