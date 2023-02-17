/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:33:12 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 00:39:17 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <ctype.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define PB 1
# define RA 2
# define RRA 3
# define PA 4
# define RB 5
# define RRB 6
# define SB 7
# define SA 8
# define MAXINT 2147483647

typedef struct s_stk
{
	int				num;
	struct s_stk	*nxt;
	struct s_stk	*prv;
}					t_stk;

typedef struct s_var
{
	char			*line;
	char			**split;
	char			**av;
	int				ac;
	int				len;
	int				print;
	int				color;
	int				fd;
	t_stk			*nx;
	t_stk			*pr;
}					t_var;

//**************operation ****************//
void				sa(struct node **a);
void				sb(struct node **a);
void				ra(t_node **a);
void				rb(t_node **a);
void				rr(t_node **a, t_node **b);
void				pb(struct node **stack_from, struct node **stack_to);
void				pa(struct node **stack_from, struct node **stack_to);
void				pb(struct node **stack_from, struct node **stack_to);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);

//************** outils *******************//

void				ft_add_stacknode(t_node **stack_a, char **tmp);
void				ft_free_lst(void **lst);
int					ft_lst_sorted(t_node **a);
int					ft_lst_lenght(t_node **a);

//************** sort *******************//
void				ft_sort_man(t_node **a, t_node **b);
void				ft_sort_radix(t_node **a, t_node **b, int size);
void				ft_init_index(t_node **a);
void				ft_sort_index(t_node **a);
int					ft_index_sort(t_node **a);

//**************ft_printf****************//
int					ft_printf(const char *format, ...);

//*************valid arg*******************//

char				**ft_arg_is_valid(int ac, char **av);
void				ft_printflst(t_node **a);

//*************sort fonctions******************//
	void			ft_sort_four(t_node **a, t_node **b);
	void			ft_sort_three(t_node **a);



#endif
