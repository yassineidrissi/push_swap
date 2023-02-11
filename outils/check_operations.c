/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:10:22 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/17 19:02:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// # include <unistd.h>
// # include <stdlib.h>
// # include <string.h>
// # include <limits.h>
// # include <ctype.h>
// # include "libft/libft.h"

// typedef struct	s_stk
// {
// 	int				num;
// 	struct s_stk	*nxt;
// 	struct s_stk	*prv;
// }	t_stk;

// typedef struct	s_var
// {
// 	char			*line;
// 	char			**split;
// 	char			**av;
// 	int				ac;
// 	int				len;
// 	int				print;
// 	int				color;
// 	int				fd;
// 	t_stk			*nx;
// 	t_stk			*pr;
// }	t_var;

// int main(int argc, char **argv) {
//     char **str;
//     str = malloc(sizeof(char*)*3);
//     str[0] = "yassine";
//     str[1] = "idrissi";
//     str[2] = NULL;
//     struct s_stk adm;
//     struct s_var yas;
//     adm.num = 0;
//     adm.prv = NULL;
//     yas.line = str[0];
//     yas.split = str;
//     yas.color = 19;
//     yas.nx = &adm;
//     yas.pr = NULL;
//     printf("the value of line is %d",adm.num);
//     adm.nxt = malloc(sizeof(struct s_stk));
//     adm.nxt->num = 1;
//     adm.nxt->prv = &adm;
//     yas.nx = malloc(sizeof(struct s_var));
//     //yas.nx->pr = yas;
//     printf("\nthe value now is %d",adm.nxt->num);
//     adm.nxt->nxt = malloc(sizeof(struct s_stk));
//     adm.nxt->nxt->num = 2;
//     adm.nxt->nxt->prv = &(adm.nxt->num);
//     printf("\nthe value now is %d",adm.nxt->nxt->num);
// }
//!*******************************test sa and sb********************************!/
	// int main()
// int main()
// {
//     // p// struct yas
//     struct node *yas;
//     struct node *ya;
//     yas = malloc(sizeof(struct node));
//     ya = malloc(sizeof(struct node));
//     yas->link = malloc(sizeof(struct node));
//     ya->link = malloc(sizeof(struct node));
//     yas->link->link = malloc(sizeof(struct node));
//     ya->link->link = malloc(sizeof(struct node));
//     yas->data = 1;
// 	yas->link->data = 2;
//     yas->link->link->data = 3;
//     yas->link->link->link = NULL;
//     ya->data = 4;
// 	ya->link->data = 5;
//     ya->link->link->data = 6;
//     ya->link->link->link = NULL;

//     // ft_printflst(&ya);
//     printf("the 1 value of yas is %d\n",ya->data);
//     // ft_printflst(&yas);
//     printf("the 2 value of yas is %d\n",ya->link->data);
//     printf("the 3 value of yas is %d\n",ya->link->link->data);
//     sa(&ya);
//     printf("the 1 value of yas is %d\n",ya->data);
//     printf("the 2 value of yas is %d\n",ya->link->data);
//     printf("the 3 value of yas is %d\n",ya->link->link->data);
//     // ft_printflst(&ya);
//     printf("yas\n");
//     // ft_printflst(&yas);
// }
//!*******************************test pa and pb********************************!/
	// int main()
// int main()
// {
//     // p// struct yas
//     struct node *yas;
//     struct node *ya;
//     yas = malloc(sizeof(struct node));
//     ya = malloc(sizeof(struct node));
//     yas->link = malloc(sizeof(struct node));
//     ya->link = malloc(sizeof(struct node));
//     yas->link->link = malloc(sizeof(struct node));
//     ya->link->link = malloc(sizeof(struct node));
//     yas->data = 1;
// 	yas->link->data = 2;
//     yas->link->link->data = 3;
//     yas->link->link->link = NULL;
//     ya->data = 4;
// 	ya->link->data = 5;
//     ya->link->link->data = 6;
//     ya->link->link->link = NULL;

//     // ft_printflst(&ya);
//     printf("the 1 value of yas is %d\n",ya->data);
//     // ft_printflst(&yas);
//     printf("the 2 value of yas is %d\n",ya->link->data);
//     printf("the 3 value of yas is %d\n",ya->link->link->data);
//     pa(&ya,&yas);
//     ft_printflst(&ya);
//     // printf("the 1 value of yas is %d\n",ya->data);
//     // printf("the 2 value of yas is %d\n",ya->link->data);
//     // printf("the 3 value of yas is %d\n",ya->link->link->data);
//     // ft_printflst(&ya);
//     printf("yas\n");
//     // ft_printflst(&yas);
// }

//!*******************************test ra and rb********************************!/

int	main(void)
{
	struct node	*yas;
	struct node	*ya;

	// p// struct yas
	yas = malloc(sizeof(struct node));
	ya = malloc(sizeof(struct node));
	yas->link = malloc(sizeof(struct node));
	ya->link = malloc(sizeof(struct node));
	yas->link->link = malloc(sizeof(struct node));
	ya->link->link = malloc(sizeof(struct node));
	yas->data = 1;
	yas->link->data = 2;
	yas->link->link->data = 3;
	yas->link->link->link = NULL;
	ya->data = 4;
	ya->link->data = 5;
	ya->link->link->data = 6;
	ya->link->link->link = NULL;
	// ft_printflst(&ya);
	printf("the 1 value of ya is %d\n", ya->data);
	// ft_printflst(&yas);
	printf("the 2 value of ya is %d\n", ya->link->data);
	printf("the 3 value of ya is %d\n", ya->link->link->data);
	rra(&ya);
	ft_printflst(&ya);
	// ft_printflst(&ya);
	printf("yas\n");
	printf("the 1 value of yas is %d\n", yas->data);
	// ft_printflst(&yas);
	printf("the 2 value of yas is %d\n", yas->link->data);
	printf("the 3 value of yas is %d\n", yas->link->link->data);
	rra(&yas);
	ft_printflst(&yas);
	// ft_printflst(&yas);
}

//!*******************************test rra and rrb********************************!/

// int main()
// {
//     // p// struct yas
//     t_node *yas;
//     t_node *ya;
//     yas = malloc(sizeof(struct node));
//     ya = malloc(sizeof(struct node));
//     yas->link = malloc(sizeof(struct node));
//     ya->link = malloc(sizeof(struct node));
//     yas->link->link = malloc(sizeof(struct node));
//     ya->link->link = malloc(sizeof(struct node));
//     yas->data = 1;
// 	yas->link->data = 2;
//     yas->link->link->data = 3;
//     yas->link->link->link = NULL;
//     ya->data = 4;
// 	ya->link->data = 5;
//     ya->link->link->data = 6;
//     ya->link->link->link = NULL;

//     // ft_printflst(&ya);
//     printf("the 1 value of ya is %d\n",ya->data);
//     // ft_printflst(&yas);
//     printf("the 2 value of ya is %d\n",ya->link->data);
//     printf("the 3 value of ya is %d\n",ya->link->link->data);
//     rra(&ya);
//     printf("the 1 value of ya is %d\n",ya->data);
//     printf("the 2 value of ya is %d\n",ya->link->data);
//     printf("the 3 value of ya is %d\n",ya->link->link->data);
//     printf("the 4 value of ya is %d\n",ya->link->link->link->data);
//     // ft_printflst(&ya);
//     printf("yas\n");
//     printf("the 1 value of yas is %d\n",yas->data);
//     // ft_printflst(&yas);
//     printf("the 2 value of yas is %d\n",yas->link->data);
//     printf("the 3 value of yas is %d\n",yas->link->link->data);
//     rrb(&yas);
//     printf("the 1 value of yas is %d\n",yas->data);
//     printf("the 2 value of yas is %d\n",yas->link->data);
//     printf("the 3 value of yas is %d\n",yas->link->link->data);
//     // ft_printflst(&yas);
// }
