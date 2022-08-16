/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:21:43 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/16 01:26:57 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP1_H
# define PUSH_SWAP1_H

# include <stdio.h>
# include <stdlib.h>

typedef struct node
{
    int data;
    struct node *previous;
    struct node *link;
} t_node;

void ft_swap(struct node **a);
void sa(struct node **b);

#endif