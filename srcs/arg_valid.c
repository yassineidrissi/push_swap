/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:02:58 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/29 19:44:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void exit_error(int i)
{
	printf("Error\n");
	exit(i);
}

static int ft_isalnumstr(char *str)
{
	int i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

static int ft_duplicate(char **str, char *s)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(str[++i])
		if(ft_atoi(str[i]) == ft_atoi(s))
			j++;
	if (j == 1)
		return 0;
	return 1;
}

void ft_arg_is_valid(int ac, char **av)
{
	int i;
	// long temp;
	char **str;

	i = 0;
	if (ac == 2)
		str = ft_split(av[1],' ');
	else
	{
		i = 1;
		str = av;
	}
	while(str[i])
	{
		if(!ft_isalnumstr(str[i]))
			exit_error(2);
		if (ft_duplicate(str,str[i]))
			exit_error(3);
		i++;
	}
}