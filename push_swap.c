/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:10:22 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/13 04:05:47 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int main(int argc, char **argv) {
    char **str;
    str = malloc(sizeof(char*)*3);
    str[0] = "yassine";
    str[1] = "idrissi";
    str[2] = NULL;
    struct s_stk adm;
    struct s_var yas;
    adm.num = 0;
    adm.prv = NULL;
    yas.line = str[0];
    yas.split = str;
    yas.color = 19;
    yas.nx = &adm;
    yas.pr = NULL;
    printf("the value of line is %d",adm.num);
    adm.nxt = malloc(sizeof(struct s_stk));
    adm.nxt->num = 1;
    adm.nxt->prv = &adm;
    yas.nx = malloc(sizeof(struct s_var));
    //yas.nx->pr = yas;
    printf("\nthe value now is %d",adm.nxt->num);
    adm.nxt->nxt = malloc(sizeof(struct s_stk));
    adm.nxt->nxt->num = 2;
    adm.nxt->nxt->prv = &(adm.nxt->num);
    printf("\nthe value now is %d",adm.nxt->nxt->num);
}