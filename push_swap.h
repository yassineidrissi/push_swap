/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:28:35 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/16 17:05:00 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP


# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>
# include "libft/libft.h"

# define PB 1
# define RA 2
# define RRA 3
# define PA 4
# define RB 5
# define RRB 6
# define SB 7
# define SA 8

typedef struct	s_stk
{
	int				num;
	struct s_stk	*nxt;
	struct s_stk	*prv;
}	t_stk;

typedef struct	s_var
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
}	t_var;

//**************operation ****************//
void 	sa(struct node **a);
void 	sb(struct node **a);
void 	ft_pushlst(t_node **a, t_node **b);
void 	ra(t_node **a);
void 	rb(t_node **a);
void 	rr(t_node **a, t_node **b);
void 	ft_lstrangeup(t_node **a);
void    pb(struct node **stack_from,struct node **stack_to);
void 	swap(struct node **a);
void    pa(struct node **stack_from,struct node **stack_to);
void    pb(struct node **stack_from,struct node **stack_to);
void 	ft_lstrangedown(t_node **a);
void 	rra(t_node **a);
void 	rrb(t_node **b);
void 	rrr(t_node **a, t_node **b);

          ///*Operations*//
void				rr_stk(t_stk **, t_stk *);
void				p_stk(t_stk **, t_stk **, t_stk *);
void				r_stk(t_stk **);
void				s_stk(t_stk **);
void				ft_printflst(t_node **a);
void				ft_swaplst(t_node **a, t_node **b);
void				pa(struct node **a, struct node **b);
void				pb(struct node **a, struct node **b);

		//*PS parser *//
int					check_sort(t_stk **, int);
void				check_dup(char **);
int					check_numbers(char **);
int					check_pivot(t_stk *, int, int);
void				pick_case(t_stk **, t_stk **, int, t_var *);
void				sort_short(t_stk **, t_stk **, int, t_var *);
void				sort_bigger(t_stk **, t_stk **, int, t_var *);
void				normalize_a(t_stk **, t_stk **, t_var *, int);
void				normalize_b(t_stk **, t_stk **, t_var *, int);

         //* PS utils */
void				ft_exit_ps(char *, int);
t_var				*ft_init_var(t_var *);
t_stk				*fill_list(t_var *, char **, t_stk *);
t_stk				*ft_lst_dup(t_stk *);
t_stk				*ft_lstsort(t_stk *);

       //*List Auxiliary functions*//
int					list_size(t_stk *);
void				add_back(t_stk **, t_stk *);
void				add_back_r(t_stk **);
void				add_front(t_stk **, t_stk *);
void				free_stk(t_stk **);
t_stk				*ft_lst_bottom(t_stk *);
int					ft_lstnbr(t_stk **, int);
int					get_min(t_stk *);
int					get_max(t_stk *);
int					get_idx(t_stk *, int, int);
int					get_pivot(t_stk *);



#endif
