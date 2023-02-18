/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:02:58 by yaidriss          #+#    #+#             */
/*   Updated: 2023/02/18 12:57:19 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exit_error(int i)
{
	printf("Error %d\n", i);
	exit(i);
}

static int	ft_isalnumstr(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_duplicate(char **str, char *s)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
		if (ft_atoi(str[i]) == ft_atoi(s))
			j++;
	if (j == 1)
		return (1);
	return (0);
}

char	**ft_arg_is_valid(int ac, char **av)
{
	int		i;
	char	**str;
	char	*line;

	(void)ac;
	i = 1;
	while (av[i])
	{
		line = ft_strjoin(line, av[i++]);
		line = ft_strjoin(line, " ");
	}
	str = ft_split(line, ' ');
	free(line);
	i = 1;
	while (str[i])
	{
		if (!ft_isalnumstr(str[i]))
			exit_error(2);
		if (ft_duplicate(str, str[i]) != 1)
			exit_error(i);
		i++;
	}
	return (str);
}
