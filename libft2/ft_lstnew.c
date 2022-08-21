/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 05:35:49 by yidrissi          #+#    #+#             */
/*   Updated: 2022/08/20 17:43:09 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node) * 1);
	if (!new)
		return (NULL);
	new->data = content;
	new->link = NULL;
	return (new);
}
